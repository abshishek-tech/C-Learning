// C Program to print the string using a function
#include <stdio.h>

// function to print the string
void printString(char* str)
{
printf("%s\n", str);
    printf("Array of Characters: ");

    int i = 0;
    while (str[i] != '\0') {
        printf("%c ", str[i]);
        i++;
    }
}

// Driver program
int main()
{
    char arr[] = "String";

    printString(arr);

    return 0;
}

