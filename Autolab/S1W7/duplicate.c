//Write a C program that removes duplicate elements from an array.
# include<stdio.h>
int main()
{
    // input the number of elements in the array
    int n;
    scanf("%d",&n);

    // declare array and input the elements into the array
    int arr[n];
    for (int i = 0; i<n; i++) 
    {
        scanf("%d", &arr[i]);
    } 

    // print the original array
    printf("Original array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

    // transfer elements to another array while removing duplictes
    int arr2[n];
    for(int i=0;i<n;i++)
    {
        arr2[i]=arr[i];
        for(int j=0;j<i;j++)                // check if the element already exists or not
        {
            if(arr2[i]==arr2[j]){arr2[i]=1248;break;}
        }
    }

    //print arr2 but the elements equal to 1248
    printf("Array after removing duplicates:\n");
    for(int i=0;i<n;i++)
    {
        if(arr2[i]!=1248){printf("%d ",arr2[i]);}
    }
    
    // print new array after removing duplicates
    return 0;
}