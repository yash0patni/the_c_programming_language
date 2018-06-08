#include <stdio.h>

int main()
{
  int c;
  long blank = 0;
  while ((c = getchar()) != EOF)
  {
    while (c == ' ')
    {
      ++blank;
      c = getchar();
    }
    if (blank > 0)
    {
      putchar(' ');
      blank = 0;
    }
    putchar(c);
  }
  return 0;
}
