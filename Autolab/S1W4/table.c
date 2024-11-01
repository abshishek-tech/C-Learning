#include <stdio.h>

int main()
{
    // Variable declarations
    int number, range;

    // Prompt for user input
    scanf("%d", &number);

    if (number <= 0)
    {
        printf("Error: The number must be positive.\n");
        return 1; // Exit the program with an error
    }

    scanf("%d", &range);

    if (range <= 0)
    {
        printf("Error: The range must be positive.\n");
        return 1; // Exit the program with an error
    }

    // Display the multiplication table
    for (int i = 1; i <= range; i++)
    {
        printf("%d * %d = %d\n", number, i, number * i);
    }

    return 0;
}
