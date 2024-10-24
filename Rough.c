#include <stdio.h>

int main()
{
    // Variable declarations
    int rows;

    // Prompt the user to input the number of rows for Pascal's Triangle
    scanf("%d", &rows);

    // Check if the number of rows is positive
    if (rows <= 0)
    {
        printf("Error: Number of rows should be greater than zero.\n");
        return 1; // Exit the program with an error
    }

    // Generate Pascal's Triangle
    for (int i = 0; i < rows; i++)
    {
        // Print leading spaces for alignment
        for (int j = 0; j < rows - i - 1; j++)
        {
            printf(" ");
        }

        // Initialize the first value of the row
        int value = 1;

        // Print the values in the current row
        for (int j = 0; j <= i ; j++)
        {
            printf("%d ", value);
            // Update value for the next position in the row
            value = value * (i - j) / (j + 1);
        }

        // Move to the next line after printing a row
        printf("\n");
    }
}    