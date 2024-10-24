#include <stdio.h>

int main() {
    int limit, num = 2;

    // Get the upper limit for prime numbers
    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    // Loop through numbers from 2 to the specified limit
    while (num <= limit) {
        int i = 2;
        int isPrime = 1; // Flag to check if the number is prime

        // Check if the number is divisible by any number from 2 to num-1
        while (i * i <= num) {
            if (num % i == 0) {
                isPrime = 0; // If divisible, set flag to 0 (not prime)
                break;
            }
            i++;
        }

        // If the flag is still 1, it means the number is prime
        if (isPrime) {
            printf("%d ", num);
        }

        num++;
    }

    printf("\n");
    return 0;
}

