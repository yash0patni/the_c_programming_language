#include <stdio.h>
#define IN 0
#define OUT 1

int main()
{
  int c, nl, nw, nc;
  nl = nw = nc = 0;;
  int state = OUT;
  while ((c = getchar()) != EOF)
  {
    ++nc;
    if (c == '\n')
      ++nl;
    if (c == ' ' || c == '\n' || c == '\t')
    {
      state = OUT;
      printf("\n");
    }
    else if (state == OUT)
    {
      state = IN;
      putchar(c);
      ++nw;
    }
    else if (state == IN)
    {
      putchar(c);
    }
  }
  return 0;
}
