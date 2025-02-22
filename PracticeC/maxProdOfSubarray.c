// C program to find Maximum Product Subarray 

#include <stdio.h>

// Function to return the product of max product subarray
int maxProduct(int arr[], int n) {
    
    // Initializing result
    int result = arr[0];

    for (int i = 0; i < n; i++) {
        int mul = 1;
      
        // traversing in current subarray
        for (int j = i; j < n; j++) {
              mul *= arr[j];
          
            // updating result every time
            // to keep track of the maximum product
            result = (result > mul) ? result : mul;
        }
    }
    return result;
}

int main() {
    int n;
    scanf("tell %d",&n);
    int arr[n];
    printf("%lld\n", maxProduct(arr, n));
    return 0;
}