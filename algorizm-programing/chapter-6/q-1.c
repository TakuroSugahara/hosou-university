#include <stdio.h>

int main() {
  float a[10];
  float sum, avg;

  a[0] = 30;
  a[1] = 20;
  a[2] = 10;
  a[3] = 25;
  a[4] = 15;
  sum = 0;
  for (int i = 0; i < 5; i++) {
    sum += a[i];
  }

  avg = sum / 5;
  printf("%f\n", avg);

  return 0;
}
