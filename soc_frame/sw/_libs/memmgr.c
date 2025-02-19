//----------------------------------------------------------------
// Statically-allocated memory manager
//
// by Eli Bendersky (eliben@gmail.com)
//
// This code is in the public domain.
//----------------------------------------------------------------
//~ #include <stdio.h>
#include "memmgr.h"
<<<<<<< HEAD
#include "util.h"
=======

/// uncomment only for sha / patricia program
/// not necessary
/// #define MEMSET

>>>>>>> 23eef5a6de376a1385a3786dc0d22a1bbe6736be
typedef ulong Align;

union mem_header_union
{
    struct
    {
        // Pointer to the next block in the free list
        //
        union mem_header_union* next;

        // Size of the block (in quantas of sizeof(mem_header_t))
        //
        ulong size;
    } s;

    // Used to align headers in memory to a boundary
    //
    Align align_dummy;
};

typedef union mem_header_union mem_header_t;

// Initial empty list
//
static mem_header_t base;

// Start of free list
//
static mem_header_t* freep = 0;

// Static pool for new allocations
//
static byte pool[POOL_SIZE] = {0};
static ulong pool_free_pos = 0;


void memmgr_init()
{
    base.s.next = 0;
    base.s.size = 0;
    freep = 0;
    pool_free_pos = 0;
}


//~ void memmgr_print_stats()
//~ {
    //~ #ifdef DEBUG_MEMMGR_SUPPORT_STATS
    //~ mem_header_t* p;

    //~ printf("------ Memory manager stats ------\n\n");
    //~ printf(    "Pool: free_pos = %lu (%lu bytes left)\n\n",
            //~ pool_free_pos, POOL_SIZE - pool_free_pos);

    //~ p = (mem_header_t*) pool;

    //~ while (p < (mem_header_t*) (pool + pool_free_pos))
    //~ {
        //~ printf(    "  * Addr: %p; Size: %8lu\n",
                //~ p, p->s.size);

        //~ p += p->s.size;
    //~ }

    //~ printf("\nFree list:\n\n");

    //~ if (freep)
    //~ {
        //~ p = freep;

        //~ while (1)
        //~ {
            //~ printf(    "  * Addr: %p; Size: %8lu; Next: %p\n",
                    //~ p, p->s.size, p->s.next);

            //~ p = p->s.next;

            //~ if (p == freep)
                //~ break;
        //~ }
    //~ }
    //~ else
    //~ {
        //~ printf("Empty\n");
    //~ }

    //~ printf("\n");
    //~ #endif // DEBUG_MEMMGR_SUPPORT_STATS
//~ }


static mem_header_t* get_mem_from_pool(ulong nquantas)
{
    ulong total_req_size;

    mem_header_t* h;

    if (nquantas < MIN_POOL_ALLOC_QUANTAS)
        nquantas = MIN_POOL_ALLOC_QUANTAS;

    total_req_size = nquantas * sizeof(mem_header_t);

    if (pool_free_pos + total_req_size <= POOL_SIZE)
    {
        h = (mem_header_t*) (pool + pool_free_pos);
        h->s.size = nquantas;
        memmgr_free((void*) (h + 1));
        pool_free_pos += total_req_size;
    }
    else
    {
        return 0;
    }

    return freep;
}


// Allocations are done in 'quantas' of header size.
// The search for a free block of adequate size begins at the point 'freep'
// where the last block was found.
// If a too-big block is found, it is split and the tail is returned (this
// way the header of the original needs only to have its size adjusted).
// The pointer returned to the user points to the free space within the block,
// which begins one quanta after the header.
//
void* memmgr_alloc(ulong nbytes)
{
    mem_header_t* p;
    mem_header_t* prevp;

    // Calculate how many quantas are required: we need enough to house all
    // the requested bytes, plus the header. The -1 and +1 are there to make sure
    // that if nbytes is a multiple of nquantas, we don't allocate too much
    //
    ulong nquantas = (nbytes + sizeof(mem_header_t) - 1) / sizeof(mem_header_t) + 1;

    // First alloc call, and no free list yet ? Use 'base' for an initial
    // denegerate block of size 0, which points to itself
    //
    if ((prevp = freep) == 0)
    {
        base.s.next = freep = prevp = &base;
        base.s.size = 0;
    }

    for (p = prevp->s.next; ; prevp = p, p = p->s.next)
    {
        // big enough ?
        if (p->s.size >= nquantas)
        {
            // exactly ?
            if (p->s.size == nquantas)
            {
                // just eliminate this block from the free list by pointing
                // its prev's next to its next
                //
                prevp->s.next = p->s.next;
            }
            else // too big
            {
                p->s.size -= nquantas;
                p += p->s.size;
                p->s.size = nquantas;
            }

            freep = prevp;
            return (void*) (p + 1);
        }
        // Reached end of free list ?
        // Try to allocate the block from the pool. If that succeeds,
        // get_mem_from_pool adds the new block to the free list and
        // it will be found in the following iterations. If the call
        // to get_mem_from_pool doesn't succeed, we've run out of
        // memory
        //
        else if (p == freep)
        {
            if ((p = get_mem_from_pool(nquantas)) == 0)
            {
                #ifdef DEBUG_MEMMGR_FATAL
                //~ printf("!! Memory allocation failed !!\n");
                #endif
                return 0;
            }
        }
    }
}


// Scans the free list, starting at freep, looking the the place to insert the
// free block. This is either between two existing blocks or at the end of the
// list. In any case, if the block being freed is adjacent to either neighbor,
// the adjacent blocks are combined.
//
void memmgr_free(void* ap)
{
    mem_header_t* block;
    mem_header_t* p;

    // acquire pointer to block header
    block = ((mem_header_t*) ap) - 1;

    // Find the correct place to place the block in (the free list is sorted by
    // address, increasing order)
    //
    for (p = freep; !(block > p && block < p->s.next); p = p->s.next)
    {
        // Since the free list is circular, there is one link where a
        // higher-addressed block points to a lower-addressed block.
        // This condition checks if the block should be actually
        // inserted between them
        //
        if (p >= p->s.next && (block > p || block < p->s.next))
            break;
    }

    // Try to combine with the higher neighbor
    //
    if (block + block->s.size == p->s.next)
    {
        block->s.size += p->s.next->s.size;
        block->s.next = p->s.next->s.next;
    }
    else
    {
        block->s.next = p->s.next;
    }

    // Try to combine with the lower neighbor
    //
    if (p + p->s.size == block)
    {
        p->s.size += block->s.size;
        p->s.next = block->s.next;
    }
    else
    {
        p->s.next = block;
    }

    freep = p;
}


//ali's work begin


/// YR

/// Compare two blocks of memory
int memcmp(const void *vl, const void *vr, __SIZE_TYPE__ n)
{
	const unsigned char *l=vl, *r=vr;
	for (; n && *l == *r; n--, l++, r++);
	return n ? *l-*r : 0;
}

/// Fill block of memory
void * Memset(void *dest, int c, __SIZE_TYPE__ n)
{
	unsigned char *s = dest;
	__SIZE_TYPE__ k;

	/* Fill head and tail with minimal branching. Each
	 * conditional ensures that all the subsequently used
	 * offsets are well-defined and in the dest region. */

	if (!n) return dest;
	s[0] = s[n-1] = c;
	if (n <= 2) return dest;
	s[1] = s[n-2] = c;
	s[2] = s[n-3] = c;
	if (n <= 6) return dest;
	s[3] = s[n-4] = c;
	if (n <= 8) return dest;

	/* Advance pointer to align it at a 4-byte boundary,
	 * and truncate n to a multiple of 4. The previous code
	 * already took care of any head/tail that get cut off
	 * by the alignment. */

//	k = -(uint32_t)s & 3;
	k = -(unsigned long int)s & 3;
	s += k;
	n -= k;
	n &= -4;

	/* Pure C fallback with no aliasing violations. */
	for (; n; n--, s++) *s = c;

	return dest;
}
void *
memmgr_memset(void *dest, int c, __SIZE_TYPE__ n){
    Memset(dest, n );
}
void *
memmgr_calloc(__SIZE_TYPE__ num, __SIZE_TYPE__ nsize) {
	if (!num || !nsize) {
		return NULL;
	}

	__SIZE_TYPE__ size = num * nsize;
	if (nsize != size / num) {
		return NULL; // If ml
	}
	void *block = memmgr_alloc(size);
	if (!block) {
		return NULL;
	}
	memmgr_memset(block, 0, size);
	return block;

}


/// opy block of memory
void * memcpy(void *dest, const void *src, __SIZE_TYPE__ n)
{
	unsigned char *d = dest;
	const unsigned char *s = src;

	for (; n; n--) *d++ = *s++;
	return dest;
}
void *
memmgr_memcpy(void *dest, const void *src, __SIZE_TYPE__ n)
{
    memcpy(void *dest, const void *src, __SIZE_TYPE__ n);
}


/*
#define BITOP(a,b,op) \
 ((a)[(size_t)(b)/(8*sizeof *(a))] op (size_t)1<<((size_t)(b)%(8*sizeof *(a))))
#define ALIGN (sizeof(size_t))
#define ONES ((size_t)-1/UCHAR_MAX)
#define HIGHS (ONES * (UCHAR_MAX/2+1))
#define HASZERO(x) (((x)-ONES) & ~(x) & HIGHS)
typedef __SIZE_TYPE__   size_t;
typedef uint64_t              uintptr_t;

 static char *
__strchrnul(const char *s, int c)
{
	size_t *w, k;

	c = (unsigned char)c;
	if (!c) return (char *)s + strlen(s);

	for (; (uintptr_t)s % ALIGN; s++)
		if (!*s || *(unsigned char *)s == c) return (char *)s;
	k = ONES * c;
	for (w = (void *)s; !HASZERO(*w) && !HASZERO(*w^k); w++);
	for (s = (void *)w; *s && *(unsigned char *)s != c; s++);
	return (char *)s;
}

size_t
strcspn(const char *s, const char *c)
{
	const char *a = s;
	size_t byteset[32/sizeof(size_t)];

	if (!c[0] || !c[1]) return __strchrnul(s, *c)-a;

	memmgr_memset(byteset, 0, sizeof byteset);
	for (; *c && BITOP(byteset, *(unsigned char *)c, |=); c++);
	for (; *s && !BITOP(byteset, *(unsigned char *)s, &); s++);
	return s-a;
}
char *
strpbrk(const char *s, const char *b)
{
	s += strcspn(s, b);
	return *s ? (char *)s : 0;
}
*/

#ifdef MEMSET
/// Fill block of memory
void * memset(void *dest, int c, __SIZE_TYPE__ n)
{
	unsigned char *s = dest;
	__SIZE_TYPE__ k;

	if (!n) return dest;
	s[0] = s[n-1] = c;
	if (n <= 2) return dest;
	s[1] = s[n-2] = c;
	s[2] = s[n-3] = c;
	if (n <= 6) return dest;
	s[3] = s[n-4] = c;
	if (n <= 8) return dest;

	k = -(unsigned int)s & 3;
	s += k;
	n -= k;
	n &= -4;

	for (; n; n--, s++) *s = c;

	return dest;
}
#endif
/// YR
