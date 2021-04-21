#include <stdio.h>

#define TABLE 9

int main() {
  int a[TABLE][TABLE];
  for (int i = 0; i < TABLE; i++) {
    for (int j = 0; j < TABLE; j++) {
      a[i][j] = (i + 1) * (j + 1);
      printf("%02d ", a[i][j]);
      if (j + 1 == TABLE) {
        printf("\n");
      }
    }
  }
  return 0;
}
