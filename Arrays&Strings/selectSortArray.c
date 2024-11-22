#include <stdio.h>
int main()
{
    // input array
    printf("input size of array :");
    int n;
    scanf("%d", &n);
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    // select sort
    for (int i = 0; i < n; i++)
    {
        int max = arr1[0], pos_max = 0;
        for (int j = 0; j < n - i; j++)
        {
            if (max < arr1[j])
            {
                max = arr1[j];
                pos_max = j;
            }
        }
        int temp = arr1[pos_max];
        arr1[pos_max] = arr1[n - i - 1];
        arr1[n - 1 - i] = temp;
    }

    // print the array
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    return 0;
}