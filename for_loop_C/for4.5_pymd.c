#include <stdio.h>

int main() {
  int size = 5;

  // creating pyramid
  for (int i = 0; i < size; i++) {
    // print spaces before stars
    for (int j = 0; j < size-i-1; j++) {
      printf(" ");
    }
    // print stars
    for (int k = 0; k < 2*i+1; k++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
