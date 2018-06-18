#include <stdio.h>
#define WORD 256

int main()
{
  int c, p;
  int words[WORD];
  for (int i = 0; i < WORD; i++)
    words[i] = 0;
  while ((c = getchar()) != EOF)
  {
    ++words[c];
  }
  printf("\n");
  for (int i = 0; i < WORD; i++)
  {
    p = words[i];
    if (p > 0)
    {
      printf("%c: ", i);
      while (p--)
      {
        printf("|");
      }
      printf("\n");
    }
  }
  return 0;
}
