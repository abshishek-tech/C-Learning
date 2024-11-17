//Write a C program to convert decimal numbers to binary using functions

#include <stdio.h>
#include<math.h>

void binary();

int main()
{        
    int a;
    scanf("%d",&a);
    printf("Binary: ");
    binary(a);
    return 0;
}

void binary(int a)
{
    int sum=0,d=10;
    for(int i=0;a!=0;a=a/2,i++)
    {
        int b = a%2;
        int c=(pow(d,i))*b;
        sum = sum+c;
    }
    printf("%d",sum);
}