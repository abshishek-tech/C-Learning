//Write a C program that calculates the area of different shapes based on user input using a
// switch statement. The program should display the following menu:
// 1. Circle
// 2. Square
// 3. Rectangle
// 4. Triangle
// After the user selects an option, prompt for the required dimensions (e.g., radius for circle, side
// for square) and display the calculated area.Handle invalid inputs appropriately.

#include <stdio.h>
int main()
{
    int a;
    double r, s, l, b;
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        scanf("%lf", &r);
        if (r >= 0)
            printf("Area of the circle: %.2lf\n", 3.14159 * r * r);
        else
            printf("Invalid input. Radius cannot be negative.\n");
        break;
    case 2:
        scanf("%lf", &s);
        if (s > 0)
            printf("Area of the square: %.2lf\n", s * s);
        else
            printf("Invalid input. Side length cannot be negative.\n");
             break;

    case 3:
        scanf("%lf %lf", &l, &b);
        if (l > 0 & b > 0)
            printf("Area of the rectangle: %.2lf\n", l * b);
        else
            printf("Invalid input. Length and width cannot be negative.\n");
        break;
    default:
        printf("Invalid choice. Please select a valid option (1-3).\n");
        break;
    }
}
   