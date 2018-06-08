#include <stdio.h>

int main()
{
  int c;
  c = getchar();
  //Send a EOF through the console (by hitting CTRL+D in Unix or CTRL+Z in Windows),
  //then getchar() will also returns EOF and the execution will end.
  while (c != EOF)
  {
    putchar(c);
    c = getchar();
  }
  return 0;
}
