#include "util.h"
#include "print.h"

int aglobal = 56;

int
foo(int x)
{
  return x*x;
}

void
bar(int (*pfoo)(int x))
{
  // call a function through a pointer
  aglobal = (*pfoo)(aglobal);

  // and implement a switch statement
  switch (aglobal & 0x7)
  {
  case 0:
    aglobal++;
    break;

  case 1:
    aglobal--;
    break;

  case 2:
    aglobal *= 2;
    break;

  case 3:
    aglobal /= 2;
    break;

  case 4:
    aglobal %= 2;
    break;

  default:
    aglobal = -aglobal;
    break;
  }
}

void (*pbar)(int (*pfoo)(int x)) = &bar;

void my_main(void)
{
  int (*pfoo)(int) = &foo;
  (*pbar)(pfoo);
  (*pbar)(pfoo);
  (*pbar)(pfoo);
  Print("aglobal = %d\n", PRINTVARS(aglobal));

}