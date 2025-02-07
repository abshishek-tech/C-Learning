#include <stdio.h>
void recursiveFunction(int n) {
if (n > 0) {
printf("%d\n", n);
recursiveFunction(n - 1);
// New stack frame for each call
}
}

int main() {
recursiveFunction(3);
/* Creates a separate stack
frame for each call */
return 0;
}
