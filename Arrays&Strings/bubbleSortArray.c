# include<stdio.h>
# include<string.h>
int main()
{
    printf("input size of array :");
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }

    // bubble sort the array
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr1[i]);}
    return 0;
}