#include <stdio.h>

int main()
{
    // Variable declarations
    int start, rows;
    int num;

    // Prompt for user input
    scanf("%d", &start);
    scanf("%d", &rows);

    // Check if the number of rows is valid
    if (rows <= 0)
    {
        printf("Error: Number of rows should be greater than zero.\n");
        return 1; // Exit the program with an error
    }

    // Initialize the number to the starting value
    num = start;

    // Generate the number pyramid
    for (int i = 1; i <= rows; i++ )
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++; // Increment the number for the next position
        }
        printf("\n"); // Move to the next row
    }

    return 0;
}
