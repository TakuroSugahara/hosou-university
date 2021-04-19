#include <stdio.h>
#include <math.h>

int main()
{
  double a = 2;
  float b = 2;
  long double c = 2;

  printf("origin double: %f\n", sqrt(a));
  printf("origin float: %f\n", sqrt(b));
  printf("origin long double: %f\n", sqrt(c));

  return 0;
}
