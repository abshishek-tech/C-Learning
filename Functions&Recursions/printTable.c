# include<stdio.h>

void printtable(float n)
{
    for(float i=0;i<=10;i++)
    {
        printf("%.2fx%.2f=%.2f\n",n,i,n*i);
    }
}
int main()
{
    float n;
    printf("tell ur number: ");
    scanf("%f",&n);
    printf("%f\n",n);
    printtable(n);
    return 0;
}