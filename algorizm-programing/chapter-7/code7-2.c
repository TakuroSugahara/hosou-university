#include <stdio.h>
#include <stdlib.h>
#define ARRAY_SIZE 13

// 二分探索
int binary_search(int array[], int size, int key) {
  int middle, low, high;
  low = 0;
  high = size - 1;
  while (low <= high) {
    middle = (low + high) / 2;
    if (key == array[middle]) {
      return middle;
    } else if (key < array[middle]) {
      high = middle - 1;
    } else {
    low = middle + 1;
    }
  }

  return -1;
}

void print_array(int array[], int size) {
  for (int i = 0; i < size - 1; i++) {
    printf("%d\n", array[i]);
  }
}

int main() {
  int index, key;
  int array[ARRAY_SIZE] = {
      50, 80, 150, 210, 250, 280, 330, 470, 510, 530, 800, 900, 990,
  };
  printf("Enter a int...\n");
  scanf("%d", &key);
  printf("Enter the int %d \n **************\n\n", key);
  print_array(array, ARRAY_SIZE);
  index = binary_search(array, ARRAY_SIZE, key);
  if (index != -1) {
    printf("Found index: %d, key: %d \n", index, array[index]);
  } else {
    printf("Not found %d \n", key);
  }
  return 0;
}
