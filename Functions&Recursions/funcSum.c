// get sum of 2 numbers using functions
# include<stdio.h>

int suma(int a,int b);
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    int sum =suma(a,b);
    printf("%d\n",sum);
   
}
int suma(int a,int b)
{
    return a+b;
}