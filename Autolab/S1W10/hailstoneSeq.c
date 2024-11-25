// Write a C program to recursively generate the Hailstone Sequence for a given positive integer, starting from the input number and continuing until it reaches 1.
# include<stdio.h>
int hali(int a);
int main()
{
    int n;
    scanf("%d",&n);
    printf("The Hailstone Sequence starting from %d is:\n",n);
    hali(n);
    return 0;
}
int hali(int a)
{
    if(a==1){printf("%d ",a);return 0;}
    if(a%2==0){printf("%d ",a);a=a/2;return hali(a);}
    if(a%2!=0 && a!=1){printf("%d ",a);a=a*3+1;return hali(a);}
}