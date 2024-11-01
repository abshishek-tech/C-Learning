#include <stdio.h>

int main() {
  // take size of triangle
  int size = 5;
  
  for (int i = 0; i < size; i++) {
    // printing star in a row
    for (int j = 0; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}
