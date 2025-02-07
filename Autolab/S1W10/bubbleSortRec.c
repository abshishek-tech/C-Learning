// Write a C program to perform bubble sort on an integer array using recursion with appropriate parameter passing

#include <stdio.h> 
  
// Swap function 
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
    // Base case 
    if (n == 1) 
        return; 
  
    int count = 0; 
    for (int i=0; i<n-1; i++) 
        if (arr[i] > arr[i+1]){ 
            swap(&arr[i], &arr[i+1]); 
            count++; 
        } 
      if (count==0) 
           return; 
    bubbleSort(arr, n-1); 
} 
  
// Function to print an array 
void printArray(int arr[], int n) 
{ 
    for (int i=0; i < n; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
  
// Driver program to test above functions 
int main() 
{ 
    //input the number of elements in the array
    int n;
    scanf("%d",&n);

    // declare array and input the elements into the array
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    } 
    bubbleSort(arr, n); 
    printArray(arr, n); 
    return 0; 
} 

