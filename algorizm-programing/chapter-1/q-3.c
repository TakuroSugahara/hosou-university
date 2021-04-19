#include <stdio.h>
#include <math.h>

int main() {
  float celsius, fahrenheit;

  printf("Enter afahrenheit: \n");
  scanf("%f", &fahrenheit);
  celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
  printf("celsius: %f. \n", celsius);

  return 0;
}
