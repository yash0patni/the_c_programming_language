#include <stdio.h>

int main()
{
  int c;
  long blank, tab, new_line;
  blank = tab = new_line = 0;
  while ((c = getchar()) != EOF)
  {
    if (c == ' ')
      ++blank;
    if (c == '\t')
      ++tab;
    if (c == '\n')
      ++new_line;
  }
  printf("Blank = %li\nTab = %li\nNew Line = %li\n", blank, tab, new_line);
  /*double nc1;
  for (nc1 = 0; getchar() != EOF; ++nc1)
    ;
  printf("%0.0f\n", nc1);*/
}
