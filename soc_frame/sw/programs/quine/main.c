#include "util.h"
#include "print.h"
#define B(x)void my_main(){display_print(0,0,"#include \"util.h\"\n#define B(x)"x"\n#define X(s)S(s)\n#define S(s)#s\nB(X(B(x)))\n");}
#define X(s)S(s)
#define S(s)#s
B(X(B(x)))