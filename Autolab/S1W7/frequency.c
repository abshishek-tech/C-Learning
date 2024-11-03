//Create a program to find the frequency of a specific element in an array.
#include <stdio.h>

int main() {
    int n, i, searchElement, frequency = 0;

    // Input the number of elements in the array
   // printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];  // Declare an array of size n

    // Input the elements of the array
   // printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Array Elements:");
for (i = 0; i < n; i++) {
        printf(" %d", arr[i]);
    }

    // Input the element to find the frequency of
   // printf("Enter the element to find the frequency of: ");
    scanf("%d", &searchElement);

    // Traverse the array to find the frequency of the search element
    for (i = 0; i < n; i++) {
        if (arr[i] == searchElement) {
            frequency++;
        }
    }

    // Output the frequency of the element
    printf("\nFrequency of element %d:%d", searchElement, frequency);

    return 0;
}