#include "util.h"
#include "print.h"

char S1[20] = "ACADBFEDSFSDFDSEFE", S2[20] = "CBDAEFEFESAFEASDD";

int i, j, m, n, LCS_table[40][40];
char b[40][40];

void lcsAlgo() {
  for (i = 0; i <= m; i++)
    LCS_table[i][0] = 0;
  for (i = 0; i <= n; i++)
    LCS_table[0][i] = 0;

  for (i = 1; i <= m; i++)
    for (j = 1; j <= n; j++) {
      if (S1[i - 1] == S2[j - 1]) {
        LCS_table[i][j] = LCS_table[i - 1][j - 1] + 1;
      } else if (LCS_table[i - 1][j] >= LCS_table[i][j - 1]) {
        LCS_table[i][j] = LCS_table[i - 1][j];
      } else {
        LCS_table[i][j] = LCS_table[i][j - 1];
      }
    }

  int index = LCS_table[m][n];
  char lcsAlgo[index + 1];
  lcsAlgo[index] = '\0';

  int i = m, j = n;
  while (i > 0 && j > 0) {
    if (S1[i - 1] == S2[j - 1]) {
      lcsAlgo[index - 1] = S1[i - 1];
      i--;
      j--;
      index--;
    }

    else if (LCS_table[i - 1][j] > LCS_table[i][j - 1])
      i--;
    else
      j--;
  }

  Print("LCS: %s",PRINTVARS(lcsAlgo));
}

void my_main(){
    m = strlen(S1);
    n = strlen(S2);
    Print("S1 : %s (%d) \nS2 : %s  (%d)\n",PRINTVARS(S1, m, S2, n));
    lcsAlgo();
    display_print(0,0,"\n");
}