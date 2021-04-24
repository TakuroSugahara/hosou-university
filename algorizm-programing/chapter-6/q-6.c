#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUMBERS 100

struct student {
  int id;
  char grade;
  char name[128];
};
typedef struct student STUDENT_TYPE;

int main() {
  STUDENT_TYPE db1[100];
  STUDENT_TYPE *db2[100];

  for (int i = 0; i < NUMBERS; i++) {
    STUDENT_TYPE s;
    int id = i + 1 ;
    s.id = id;

    char grade[20];
    sprintf(grade, "%d", id);
    s.grade = grade;

    s.

    db1[i] = s;
    db2[i] = &s;
  }
  return 0;
}
