#include <stdio.h>

int main()
{
  printf("Celsius-Fahrenheit table\n");
  float fahr, cels;
  int lower, upper, step;
  lower = 0;
  upper = 300;
  step = 20;
  cels = lower;
  printf("\nCelsius Fahrenheit\n");
  while (cels <= upper)
  {
    fahr = ((9.0 / 5.0) * cels) + 32;
    printf("%3.0f \t %6.1f\n", cels, fahr);
    cels += step;
  }
  return 0;
}
