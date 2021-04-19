#include <stdio.h>

int main() {
  int x, y;
  printf("xを入力してください...\n");
  scanf("%d", &x);
  printf("yを入力してください...\n");
  scanf("%d", &y);

  printf("x: %d, y: %d \n", x, y);
  if (x > y) {
    printf("x is greater than y. \n");
  } else {
    printf("x is less than or equal to y. \n");
  }
}
