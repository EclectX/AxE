#include "util.h"
#include "print.h"
#include "memmgr.h"

#define TRUE  1
#define FALSE 0

#define SIZE 760

char inp_pat[] = "NzZVOzZXNoGXMl8yxesyY";
char inp_txt[] =
  "zJfMus2WzLnMr82T4bmuzKTNjcylzYfNiGjMssyBZc2PzZPMvMyXzJnMvMyjzZQgzYfMnMyxzKDN"
  "k82NzZVOzZXNoGXMl8yxesyYzJ3MnMy6zZlwzKTMusy5zY3Mr82aZcygzLvMoM2ccsyozKTNjcy6"
  "zJbNlMyWzJZkzKDMn8ytzKzMnc2facymzZbMqc2TzZTMpGHMoMyXzKzNicyZbs2azZwgzLvMnsyw"
  "zZrNhWjMtc2JacyzzJ52zKLNh+G4mc2OzZ8t0onMrcypzLzNlG3MpMytzKtpzZXNh8ydzKZuzJfN"
  "meG4jcyfIMyvzLLNlc2ex6vMn8yvzLDMss2ZzLvMnWYgzKrMsMywzJfMlsytzJjNmGPMps2NzLLM"
#if SIZE >= 760
  "ns2NzKnMmeG4pc2aYcyuzY7Mn8yZzZzGocypzLnNjnPMpC7MncydINKJWsyhzJbMnM2WzLDMo82J"
  "zJxhzqwerty42ZbMsM2ZzKzNoWzMssyrzLPNjcypZ8yhzJ/MvMyxzZrMnsyszYVvzJfNnC7Mnw=="
  "zKZIzKzMpMyXzKTNnWXNnCDMnMylzJ3Mu82NzJ/MgXfMlWjMlsyvzZNvzJ3NmcyWzY7MscyuINKJ"
  "zLrMmcyezJ/NiFfMt8y8zK1hzLrMqs2NxK/NiM2VzK3NmcyvzJx0zLbMvMyuc8yYzZnNlsyVIMyg"
  "nMyWIMywzYnMqc2HzZnMss2ezYVUzZbMvM2TzKrNomjNj82TzK7Mu2XMrMydzJ/NhSDMpMy5zJ1X"
#endif
#if SIZE >= 1140
  "ns2NzKnMmeG4pc2aYcyuzY7Mn8yZzZzGocypzLnNjnPMpC7MncydINKJWsyhzJbMnM2WzLDMo82J"
  "zJxhzqwerty42ZbMsM2ZzKzNoWzMssyrzLPNjcypZ8yhzJ/MvMyxzZrMnsyszYVvzJfNnC7Mnw=="
  "zKZIzKzMpMyXzKTNnWXNnCDMnMylzJ3Mu82NzJ/MgXfMlWjMlsyvzZNvzJ3NmcyWzY7MscyuINKJ"
  "zLrMmcyezJ/NiFfMt8y8zK1hzLrMqs2NxK/NiM2VzK3NmcyvzJx0zLbMvMyuc8yYzZnNlsyVIMyg"
  "nMyWIMywzYnMqc2HzZnMss2ezYVUzZbMvM2TzKrNomjNj82TzK7Mu2XMrMydzJ/NhSDMpMy5zJ1X"
#endif
#if SIZE >= 1520
  "ns2NzKnMmeG4pc2aYcyuzY7Mn8yZzZzGocypzLnNjnPMpC7MncydINKJWsyhzJbMnM2WzLDMo82J"
  "zJxhzqwerty42ZbMsM2ZzKzNoWzMssyrzLPNjcypZ8yhzJ/MvMyxzZrMnsyszYVvzJfNnC7Mnw=="
  "zKZIzKzMpMyXzKTNnWXNnCDMnMylzJ3Mu82NzJ/MgXfMlWjMlsyvzZNvzJ3NmcyWzY7MscyuINKJ"
  "zLrMmcyezJ/NiFfMt8y8zK1hzLrMqs2NxK/NiM2VzK3NmcyvzJx0zLbMvMyuc8yYzZnNlsyVIMyg"
  "nMyWIMywzYnMqc2HzZnMss2ezYVUzZbMvM2TzKrNomjNj82TzK7Mu2XMrMydzJ/NhSDMpMy5zJ1X"
#endif
  ;

#define D 256 

void search(char *txt, int n, char *pat, int m, int *ret) {
  int q = 2147483647; 
  int h = 1;
  for (int i = 0; i < m - 1; i++) 
    h = (h * D) % q; 
  int p = 0;
  int t = 0;

  for (int i = 0; i < m; i++) { 
    p = (D * p + pat[i]) % q; 
    t = (D * t + txt[i]) % q; 
  } 
  for (int i = 0; i <= n - m; i++) {
    ret[i] = (p == t);
    if (i < n-m) 
    { 
      t = (D*(t - ((int)txt[i])*h) + txt[i+m])%q; 
      if (t < 0) 
        t = (t + q); 
    } 
  } 
}
void my_main(){ 
  int n = strlen(inp_txt);
  int m = strlen(inp_pat);
  Print("n = %d, m = %d\n",PRINTVARS(n, m));
  
  char *txt = memmgr_alloc(sizeof(char)*(n+1));
  int k;
  for (k=0; k < n; k++)
    txt[k] = inp_txt[k];
  txt[k] = '\0';

  char *pat = memmgr_alloc(sizeof(char)*(m+1));
  for (k=0; k < m; k++)
    pat[k] = inp_pat[k];
  txt[k] = '\0';

  int *ret = (int *)memmgr_alloc(sizeof(int)*n);
  for (int i=0; i<n; i++)
    ret[i] = FALSE; 

  search(txt, n, pat, m, ret);

  for(int i=0; i<n; i++)
  {
    if (ret[i]) 
    { 
      Print("pattern occurs at shift = %d\n",PRINTVARS(i));
    }
  }

  return 0;
} 
