#include "util.h"
#include "print.h"
/**
 * @file
 * @brief This program aims at calculating the GCD of n numbers by division
 * method
 *
 * @see gcd_iterative_euclidean.cpp, gcd_recursive_euclidean.cpp
 */


/** Compute GCD using division algorithm
 *
 * @param[in] a array of integers to compute GCD for
 * @param[in] n number of integers in array `a`
 */
uint32_t
gcd(uint32_t *a, unsigned n)
{
  unsigned j = 1;  // to access all elements of the array starting from 1
  uint32_t gcd = a[0];
  while (j < n)
  {
    if (a[j] % gcd == 0)  // value of gcd is as needed so far
      j++;              // so we check for next element
    else
      gcd = a[j] % gcd;  // calculating GCD by division method
  }
  return gcd;
}

/** Main function */
void
my_main()
{
  // initialize RNG
  srand(42);

  unsigned n = 64;
  uint32_t *a = (uint32_t *)libmin_malloc(sizeof(uint32_t)*n);
  for (unsigned i = 0; i < n; i++)
    a[i] = (rand() % 10000000) * 37;

  Print("INFO: a[%d] = { ", PRINTVARS(n));
  for (unsigned i = 0; i < n; i++)
    Print("%d, ", PRINTVARS(a[i]));
  display_print(0,0, " }\n");

  uint32_t gcd_of_n;
  gcd_of_n = gcd(a, n);
  Print("GCD of list: %u\n", PRINTVARS(gcd_of_n));

  libmin_free(a);

}

