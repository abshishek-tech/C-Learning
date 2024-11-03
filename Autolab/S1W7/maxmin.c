//Write a program to find the maximum and minimum elements in an array.
#include <stdio.h>

int main() {
    int n, i;
    int max, min;

    // Input size of the array

    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Input elements of the array

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max and min
    max = arr[0];
    min = arr[0];

    // Find max and min elements
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }


    
    printf("\nMaximum element = %d\n", max);
    printf("Minimum element = %d\n", min);

    return 0;
}