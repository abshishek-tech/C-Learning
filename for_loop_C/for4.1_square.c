#include <stdio.h>

int main() {
  // take a size
  // you can take user input
  int size = 5;
  // external loop
  for (int i = 0; i < size; i++) {
    // internal loop
    for (int j = 0; j < size; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
