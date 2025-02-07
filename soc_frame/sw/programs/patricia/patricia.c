/*
 * patricia.c
 *
 * Patricia trie implementation.
 *
 * Functions for inserting nodes, removing nodes, and searching in
 * a Patricia trie designed for IP addresses and netmasks.  A
 * head node must be created with (key,mask) = (0,0).
 *
 * NOTE: The fact that we keep multiple masks per node makes this
 *       more complicated/computationally expensive then a standard
 *       trie.  This is because we need to do longest prefix matching,
 *       which is useful for computer networks, but not as useful
 *       elsewhere.
 *
 * Matthew Smart <mcsmart@eecs.umich.edu>
 *
 * Copyright (c) 2000
 * The Regents of the University of Michigan
 * All rights reserved
 *
 * $Id: patricia.c,v 1.1.1.1 2000/11/06 19:53:17 mguthaus Exp $
 */

#include "util.h"
#include "memmgr.h"
#include "patricia.h"
static __inline
unsigned long
bit(int i, unsigned long key)
{
	return key & (1 << (31-i));
}

static int
pat_count(struct ptree *t, int b)
{
	int count;
	
	if (t->p_b <= b) return 0;

	count = t->p_mlen;
	
	count += pat_count(t->p_left,  t->p_b);
	count += pat_count(t->p_right, t->p_b);

	return count;
}

static struct ptree *
insertR(struct ptree *h, struct ptree *n, int d, struct ptree *p)
{
	if ((h->p_b >= d) || (h->p_b <= p->p_b)) {
		n->p_b = d;
		n->p_left = bit(d, n->p_key) ? h : n;
		n->p_right = bit(d, n->p_key) ? n : h;
		return n;
	}

	if (bit(h->p_b, n->p_key))
		h->p_right = insertR(h->p_right, n, d, h);
	else
		h->p_left = insertR(h->p_left, n, d, h);
	return h;
}

struct ptree *
pat_insert(struct ptree *n, struct ptree *head)
{
	struct ptree *t;
	struct ptree_mask *buf, *pm;
	int i, copied;

	if (!head || !n || !n->p_m)
		return 0;
	n->p_key &= n->p_m->pm_mask;
	t = head;
	do {
		i = t->p_b;
		t = bit(t->p_b, n->p_key) ? t->p_right : t->p_left;
	} while (i < t->p_b);
	if (n->p_key == t->p_key) {
		for (i=0; i < t->p_mlen; i++) {
			if (n->p_m->pm_mask == t->p_m[i].pm_mask) {
				t->p_m[i].pm_data = n->p_m->pm_data;
				memmgr_free(n->p_m);
				memmgr_free(n);
				n = 0;
				return t;
			}
		}
		
		buf = (struct ptree_mask *)memmgr_alloc(
		       sizeof(struct ptree_mask)*(t->p_mlen+1));
		copied = 0;
		for (i=0, pm=buf; i < t->p_mlen; pm++) {
			if (n->p_m->pm_mask > t->p_m[i].pm_mask) {
				bcopy(t->p_m + i, pm, sizeof(struct ptree_mask));
				i++;
			}
			else {
				bcopy(n->p_m, pm, sizeof(struct ptree_mask));
				n->p_m->pm_mask = 0xffffffff;
				copied = 1;
			}
		}
		if (!copied) {
			bcopy(n->p_m, pm, sizeof(struct ptree_mask));
		}
		memmgr_free(n->p_m);
		memmgr_free(n);
		n = 0;
		t->p_mlen++;

		memmgr_free(t->p_m);
		t->p_m = buf;
		
		return t;
	}

	for (i=1; i < 32 && bit(i, n->p_key) == bit(i, t->p_key); i++); 

	if (bit(head->p_b, n->p_key))
		head->p_right = insertR(head->p_right, n, i, head);
	else
		head->p_left = insertR(head->p_left, n, i, head);
	
	return n;
}

int
pat_remove(struct ptree *n, struct ptree *head)
{
	struct ptree *p, *g, *pt, *pp, *t;
	struct ptree_mask *buf, *pm;
	int i;

	if (!n || !n->p_m || !t)
		return 0;

	g = p = t = head;
	do {
		i = t->p_b;
		g = p;
		p = t;
		t = bit(t->p_b, n->p_key) ? t->p_right : t->p_left;
	} while (i < t->p_b);

	if (t->p_key != n->p_key)
		return 0;
	if (t->p_mlen == 1) {
		if (t->p_b == 0)
			return 0;
		if (t->p_m->pm_mask != n->p_m->pm_mask)
			return 0;
		pp = pt = p;
		do {
			i = pt->p_b;
			pp = pt;
			pt = bit(pt->p_b, p->p_key) ? pt->p_right : pt->p_left;
		} while (i < pt->p_b);

		if (bit(pp->p_b, p->p_key))
			pp->p_right = t;
		else
			pp->p_left = t;
		if (bit(g->p_b, n->p_key))
			g->p_right = bit(p->p_b, n->p_key) ?
				p->p_left : p->p_right;
		else
			g->p_left = bit(p->p_b, n->p_key) ?
				p->p_left : p->p_right;
		if (t->p_m->pm_data)
			memmgr_free(t->p_m->pm_data);
		memmgr_free(t->p_m);
		if (t != p) {
			t->p_key = p->p_key;
			t->p_m = p->p_m;
			t->p_mlen = p->p_mlen;
		}
		memmgr_free(p);

		return 1;
	}

	for (i=0; i < t->p_mlen; i++)
		if (n->p_m->pm_mask == t->p_m[i].pm_mask)
			break;
	if (i >= t->p_mlen)
		return 0;
	
	buf = (struct ptree_mask *)memmgr_alloc(
	       sizeof(struct ptree_mask)*(t->p_mlen-1));

	for (i=0, pm=buf; i < t->p_mlen; i++) {
		if (n->p_m->pm_mask != t->p_m[i].pm_mask) {
			bcopy(t->p_m + i, pm++, sizeof(struct ptree_mask));
		}
	}
	
	t->p_mlen--;
	memmgr_free(t->p_m);
	t->p_m = buf;
	return 1;
}

struct ptree *
pat_search(unsigned long key, struct ptree *head)
{
	struct ptree *p = 0, *t = head;
	int i;
	
	if (!t)
		return 0;
	do {
		if (t->p_key == (key & t->p_m->pm_mask)) {
			p = t;
		}
		
		i = t->p_b;
		t = bit(t->p_b, key) ? t->p_right : t->p_left;
	} while (i < t->p_b);
	return (t->p_key == (key & t->p_m->pm_mask)) ? t : p;
}