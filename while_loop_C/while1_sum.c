#include <stdio.h>

int main() {
    int num, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num >= 10) { // Continue until the number becomes a single digit
        sum = 0;
        while (num != 0) {
            sum += num % 10;
            num /= 10;
        }
        num = sum;
    }

    printf("Final single digit: %d\n", num);
    return 0;
}

