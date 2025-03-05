// C program to find the largest number of continuous 1s
#include <stdio.h>

int maxContinuousOnes(int arr[], int size) {
    int maxCount = 0;  
    int currentCount = 0;  

    for (int i = 0; i < size; i++) {
        if (arr[i] == 1) {
            currentCount++; 
        } else {
        
            if (currentCount > maxCount) {
                maxCount = currentCount;
            }
            currentCount = 0; 
        }
    }

   
    if (currentCount > maxCount) {
        maxCount = currentCount;
    }

    return maxCount;
}

int main() {
    int arr[] = {1, 1, 0, 1, 1,1,1,1,1,1,1, 1, 0, 1, 1, 1, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = maxContinuousOnes(arr, size);
    printf("The maximum number of continuous 1's is: %d\n", result);

    return 0;
}
