//Write a C program to pass an array of integer elements to a function and return the sum of all elements

#include<stdio.h>

int sumOfArray(int arr[], int size) 
{
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}


int main()
{
    int n;                                   // Reading the number of characters
    scanf("%d", &n);
    int arr[n];                             // Reading characters into the array
    for (int i = 0; i < n; i++) 
    {
    scanf(" %d", &arr[i]); 
    }

    int totalSum = sumOfArray(arr, n);      // calling on func to sum it up
    
    // Displaying the result
    printf("The sum of all elements in the array is: %d\n", totalSum);
    
    return 0;
}