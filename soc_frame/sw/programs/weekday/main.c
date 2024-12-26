#include "util.h"
#include "print.h"
int dayOfWeek(int y, int m, int d){
  int t[]={0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  y -= (m<3) ? 1 : 0;
  return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
void my_main()
{
    const char *days[7]={"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    Print("%d/%d/%d was a `%s'\n", PRINTVARS(2, 20, 2024, days[dayOfWeek(2024, 2, 20)])); // %02d

    Print("%d/%d/%d was a `%s'\n", PRINTVARS(4, 5, 1994, days[dayOfWeek(1994, 4, 5)]));

    Print("%d/%d/%d was a `%s'\n", PRINTVARS(1, 1, 1975, days[dayOfWeek(1975, 1, 1)]));

    Print("%d/%d/%d was a `%s'\n", PRINTVARS(2, 7, 1964, days[dayOfWeek(1964, 2, 7)]));
}