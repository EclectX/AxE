#include "util.h"
#include "print.h"


/* qsort int comparison function */
int
int_cmp(const void *a, const void *b)
{
    const int *ia = (const int *)a; // casting pointer types
    const int *ib = (const int *)b;
    return *ia  - *ib;
    /* integer comparison: returns negative if a < b
    and positive if a > b */
}

/* integer array printing function */
void
print_int_array(const int *array, size_t len)
{
    size_t i;

    for(i=0; i<len; i++)
        Print("%d | ", PRINTVARS(array[i]));

    Putc('\n');
}

/* sorting integers using qsort() example */
void
sort_integers_example(void)
{
    int numbers[] = { 7, 3, 4, 1, -1, 23, 12, 43, 2, -4, 5 };
    size_t numbers_len = sizeof(numbers)/sizeof(int);

    Puts("*** Integer sorting...");

    /* print original integer array */
    print_int_array(numbers, numbers_len);

    /* sort array using qsort functions */
    qsort(numbers, numbers_len, sizeof(int), int_cmp);

    /* print sorted integer array */
    print_int_array(numbers, numbers_len);
}

/* qsort C-string comparison function */
int
cstring_cmp(const void *a, const void *b)
{
    const char **ia = (const char **)a;
    const char **ib = (const char **)b;
    return Strcmp(*ia, *ib);
    /* strcmp functions works exactly as expected from
    comparison function */
}

/* C-string array printing function */
void
print_cstring_array(char **array, size_t len)
{
    size_t i;

    for(i=0; i<len; i++)
        Print("%s | ", PRINTVARS(array[i]));

    Putc('\n');
}

/* sorting C-strings array using qsort() example */
void
sort_cstrings_example(void)
{
    char *strings[] = { "Zorro", "Alex", "Celine", "Bill", "Forest", "Dexter" };
    size_t strings_len = sizeof(strings) / sizeof(char *);

    /* STRING */
    Puts("*** String sorting...");

    /* print original string array */
    print_cstring_array(strings, strings_len);

    /* sort array using qsort functions */
    qsort(strings, strings_len, sizeof(char *), cstring_cmp);

    /* print sorted string array */
    print_cstring_array(strings, strings_len);
}

/* an example of struct */
struct st_ex {
    char product[16];
    uint32_t price;
};

/* qsort struct comparision function (price float field) */
int
struct_cmp_by_price(const void *a, const void *b)
{
    struct st_ex *ia = (struct st_ex *)a;
    struct st_ex *ib = (struct st_ex *)b;
    return (int)(100*ia->price - 100*ib->price);
    /* float comparison: returns negative if b > a
    and positive if a > b. We multiplied result by 100.0
    to preserve decimal fraction */
}

/* qsort struct comparision function (product C-string field) */
int
struct_cmp_by_product(const void *a, const void *b)
{
    struct st_ex *ia = (struct st_ex *)a;
    struct st_ex *ib = (struct st_ex *)b;
    return Strcmp(ia->product, ib->product);
    /* strcmp functions works exactly as expected from
    comparison function */
}

/* Example struct array printing function */
void
print_struct_array(struct st_ex *array, size_t len)
{
    size_t i;

    for(i=0; i<len; i++)
        Print("[ product: %s \t price: $%f ]\n", PRINTVARS(array[i].product, array[i].price));

    Puts("--");
}

/* sorting structs using qsort() example */
void
sort_structs_example(void)
{
    struct st_ex structs[] = {{"mp3 player", 0x43958000}, {"plasma tv",0x45098000 },
                              {"notebook", 0x44a28000}, {"smartphone", 0x43f9feb8},
                              {"dvd player", 0x43160000}, {"matches",0x3e4ccccd }};

    size_t structs_len = sizeof(structs) / sizeof(struct st_ex);

    Puts("*** Struct sorting (price)...");

    /* print original struct array */
    print_struct_array(structs, structs_len);

    /* sort array using qsort functions */
    qsort(structs, structs_len, sizeof(struct st_ex), struct_cmp_by_price);

    /* print sorted struct array */
    print_struct_array(structs, structs_len);

    Puts("*** Struct sorting (product)...");

    /* resort using other comparision function */
    qsort(structs, structs_len, sizeof(struct st_ex), struct_cmp_by_product);

    /* print sorted struct array */
    print_struct_array(structs, structs_len);
}

/* MAIN program (calls all other examples) */
void
my_main()
{
    /* run all example functions */
    sort_integers_example();
    sort_cstrings_example();
    sort_structs_example();


}