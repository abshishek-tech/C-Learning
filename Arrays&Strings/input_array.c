# include<stdio.h>
int main()
{
    printf("how many inputs do you want? :");
    int n;
    scanf("%d",&n);
    int arr1[n];
    for(int i=0;i<n;i++)
    {
        int a;
        scanf("%d",&a);
        arr1[i]=a;
    }
    return 0;

}