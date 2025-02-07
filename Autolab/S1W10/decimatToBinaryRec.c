//Write a C program to convert decimal number to binary using recursion with appropriate parameter passing.

#include <stdio.h>
 
int bin(int a)
{
    if (a == 0) 
        return 0; 
    else
        return (a % 2 + 10 * 
                bin(a / 2));
}
 
// Driver code 
int main()
{
    int a;
    scanf("%d",&a);
    printf("Binary: %d", bin(a));
    return 0;
}