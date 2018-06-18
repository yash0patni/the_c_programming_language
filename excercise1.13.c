#include <stdio.h>
#define WORD 26

int main()
{
  int c, p;
  int words[WORD];
  for (int i = 0; i < WORD; i++)
    words[i] = 0;
  while ((c = getchar()) != EOF)
  {
    if (c >= 'a' && c <= 'z')
      ++words[c - 'a'];
  }
  printf("\n");
  for (int i = 0; i < WORD; i++)
  {
    p = words[i];
    printf("%c: ", i + 'a');
    while (p--)
    {
      printf("|");
    }
    printf("\n");
  }
  int max = words[0];
  for (int i = 1; i < WORD; i++)
  {
    if (words[i] > max)
      max = words[i];
  }
  printf("\n");
  for (int i = 0; i < WORD; i++)
  {
    words[i] = max - words[i];
  }
  while (max--)
  {
    for (int i = 0; i < WORD; i++)
    {
      if (words[i])
      {
        words[i] = words[i] - 1;
        printf("    ");
      }
      else
      {
        printf("___ ");
      }
    }
    printf("\n");
  }
  printf("\n");
  for (int i = 0; i < WORD; i++)
  {
    printf(" %c  ", i + 'a');
  }
  printf("\n");
  return 0;
}
