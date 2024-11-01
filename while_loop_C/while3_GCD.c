#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0) { // Euclidean algorithm
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD is: %d\n", a);
    return 0;
}

