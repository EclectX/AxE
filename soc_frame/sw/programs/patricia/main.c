#include "util.h"
#include "memmgr.h"
#include "patricia.h"
#include "input.h"
struct in_addr {
  union {
    struct {
      unsigned char s_b1;
      unsigned char s_b2;
      unsigned char s_b3;
      unsigned char s_b4;
    } s_un_b;
    struct {
      unsigned short s_w1;
      unsigned short s_w2;
    } s_un_w;
    unsigned long s_addr;
  } s_un;
};
struct MyNode {
	int foo;
	uint32_t bar;
};

void my_main()
{
	struct ptree *phead;
	struct ptree *p,*pfind;
	struct ptree_mask *pm;
	MFILE __fp = {
		"input",
		__input_sz,
		__input,
		0
	};
	MFILE *fp = &__fp;
	char line[128];
	char addr_str[16];
	struct in_addr addr;
	unsigned long mask=0xffffffff;
	uint32_t time;
	phead = (struct ptree *)memmgr_alloc(sizeof(struct ptree));
	if (!phead) {
		Print("Allocating p-trie node failed!",0);
		return;
	}
	bzero(phead, sizeof(*phead));
	phead->p_m = (struct ptree_mask *)memmgr_alloc(
			sizeof(struct ptree_mask));
	if (!phead->p_m) {
		Print("Allocating p-trie mask data failed!",0);
		return;
	}
	bzero(phead->p_m, sizeof(*phead->p_m));
	pm = phead->p_m;
	pm->pm_data = (struct MyNode *)memmgr_alloc(sizeof(struct MyNode));
	if (!pm->pm_data) {
		Print("Allocating p-trie mask's node data failed!",0);
		return;
	}
	bzero(pm->pm_data, sizeof(*pm->pm_data));
	phead->p_mlen = 1;
	phead->p_left = phead->p_right = phead;
	while (mgets(line, 128, fp)) {
		Sscanf(line, "%f %d",SCANVARS(&time,&addr.s_un.s_addr));
		//inet_aton(addr_str, &addr);
		p = (struct ptree *)memmgr_alloc(sizeof(struct ptree));
		if (!p) {
			Print("Allocating p-trie node failed!",0);
			return;
		}
		bzero(p, sizeof(*p));
		p->p_m = (struct ptree_mask *)memmgr_alloc(
				sizeof(struct ptree_mask));
		if (!p->p_m) {
			Print("Allocating p-trie mask data",0);
			return;
		}
		bzero(p->p_m, sizeof(*p->p_m));

		pm = p->p_m;
		pm->pm_data = (struct MyNode *)memmgr_alloc(sizeof(struct MyNode));
		if (!pm->pm_data) {
			Print("Allocating p-trie mask's node data failed!",0);
			return;
		}
		bzero(pm->pm_data, sizeof(*pm->pm_data));

		p->p_key = addr.s_un.s_addr;
		p->p_m->pm_mask = htonl(mask);

		pfind=pat_search(addr.s_un.s_addr,phead);
		//printf("%08x %08x %08x\n",p->p_key, addr.s_addr, p->p_m->pm_mask);
		//if(pfind->p_key==(addr.s_addr&pfind->p_m->pm_mask))
		if(pfind->p_key==addr.s_un.s_addr)
		{
			Print("%f %08lx: ",PRINTVARS(time, addr.s_un.s_addr));
			Print("Found.\n",0);
		}
		else
		{
			
			//printf("%08x: ", addr.s_addr);
			//printf("Inserted.\n");
			p = pat_insert(p, phead);
		}
		if (!p) {
			Print("Failed on pat_insert\n",0);
			return;
		}
	}
}