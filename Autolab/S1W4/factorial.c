#include <stdio.h>

int main() {
    // Variable declarations
    int n;
    unsigned long long factorial = 1;

    // Prompt for user input
    scanf("%d", &n);

    // Check for negative input
    if (n < 0) {
        printf("Error: Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate factorial using a for loop
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        // Display the result
        printf("Factorial = %llu\n", factorial);
    }

    return 0;
}
