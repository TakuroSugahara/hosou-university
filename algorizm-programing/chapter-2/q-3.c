#include <stdio.h>

int main() {
  int a;
  a = 2;
  if (a == 0 || a == 1 || a == 2) {
    printf("A\n");
  } else if (a == 3 || a == 4) {
    printf("B\n");
  } else {
    printf("ERROR: invalid number \n");
  }

  return 0;
}
