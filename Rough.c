#include <stdio.h>

int main() {
    int n, i, search, found = 0;

    // Input size of the array
   
    scanf("%d", &n);

    // Declare the array
    int arr[n];

    // Input elements of the arrays
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    
    scanf("%d", &search);

    // Search for the element
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("Element %d found at index %d\n", search, i);
            found = 1; // Set found flag
            break;     // Exit loop if found
        }
    }
}