#include <stdio.h>

void foo(int n) {
  if (n < 15) {
    foo(n + 1);
    printf("%d \n", n);
  }
}

int main() {
  int num;
  printf("Enter a number...\n");
  scanf("%d", &num);
  printf("*****\n");
  foo(num);
  return 0;
}
