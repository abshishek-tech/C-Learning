#include <stdio.h>

int main()
{
    // Variable declarations
    long long int num, sum = 0, remainder;

    // Prompt for user input
    scanf("%lld", &num);

    // Convert negative number to positive
    if (num < 0)
    {
        num = -num;
    }

    // Calculate the sum of digits using a while loop
    while (num != 0)
    {
        remainder = num % 10; // Get the last digit
        sum += remainder;     // Add it to the sum
        num /= 10;            // Remove the last digit
    }

    // Display the result
    printf("Sum = %lld\n", sum);

    return 0;
}
