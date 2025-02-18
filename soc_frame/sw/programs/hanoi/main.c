#include "util.h"
#include "print.h"
//#include "libmin.h"

#define other(i,j) (6-(i+j))

static int num[4];
static long count;

static int mov(int n, int f, int t)
{
  int o;

  if (n == 1)
    {
      num[f]--;
      num[t]++;
      count++;
      return 0;
    }
  o = other(f, t);
  mov(n-1, f, o);
  mov(1, f, t);
  mov(n-1, o, t);
  return 0;
}

void my_main(void)
{
  int disk, Loops = 0;

  display_print(0, 0,"Towers of Hanoi Puzzle Test Program\n");
  display_print(0, 0, "Disks     Moves\n");

  disk = 0;

  while (1)
    {
      disk++;
      num[0] = 0;
      num[1] = disk;
      num[2] = 0;
      num[3] = 0;
      count  = 0;

      mov(disk,1,3);

      Loops = Loops + 1;
      Print("%d         %d\n",PRINTVARS(disk,count));

      if (disk == 10) break;
    }

}