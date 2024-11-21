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
    float sum;
    for(int i=0;i<n;i++)
    {
        sum =sum+arr1[i];
        printf("%f\n",sum);
    }
    float avg = sum / 3 ;
    printf("%f\n",avg);
    return 0;

}