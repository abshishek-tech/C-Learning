// C program to find Maximum Sum Subarray 

#include <stdio.h>

// Function to return the product of max product subarray
int maxSum(int arr[], int n) {
    
    // Initializing result
    int result = arr[0];

    for (int i = 0; i < n; i++) 
    {
        if(arr[i]>0){result=result + arr[i];}
    }
    return result;
}

int main() {
    int n;
    printf("size of array: ");scanf("%d",&n);
    int arr[n];
    printf("elements of array: \n");for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
    printf("the max product of subarrays is: %d\n", maxSum(arr, n));
    return 0;
}