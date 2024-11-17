//Write a c program to read characters from an array and display its ascii value, using Functions

#include<stdio.h>

void AsciiValues(char n,int arr);

int main()
{   
    int n;
    // Reading the number of characters
    scanf("%d", &n);

    // Reading characters into the array
    char arr[n];
   
    for (int i = 0; i < n; i++) 
    {
    scanf(" %c", &arr[i]); // Note the space before %c to avoid newline issues
    }

    // Calling the function to display ASCII values
    for(int i=0;i<n;i++)
    {   
        AsciiValues(arr[i],arr[i]);
    }
    

    return 0;
}

void AsciiValues(char n,int arr)
{
    printf("Character:%c, ASCII value:%d\n",n,arr);
}