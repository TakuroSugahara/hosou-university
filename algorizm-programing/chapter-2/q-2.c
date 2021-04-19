#include <stdio.h>

int main() {
  char grade;

  printf("1文字の英語を入力してください...\n");
  scanf("%c", &grade);

  switch (grade) {
  case 'A':
    printf("exellent\n");
    break;
  case 'a':
    printf("exellent\n");
    break;
  case 'B':
    printf("good\n");
    break;
  case 'b':
    printf("good\n");
    break;
  case 'C':
    printf("fair\n");
    break;
  case 'c':
    printf("fair\n");
    break;
  case 'D':
    printf("barely passing\n");
    break;
  case 'd':
    printf("barely passing\n");
    break;
  case 'F':
    printf("not passing\n");
    break;
  case 'f':
    printf("not passing\n");
    break;
  default:
    printf("ERROR: invalid character\n");
    break;
  }

  return 0;
}

