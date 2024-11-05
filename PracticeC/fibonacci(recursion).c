// print the nth element of fibanocci series using recursion
# include<stdio.h>

int fib(int n)
{
    if(n==0 || n==1){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main()
{
    int x=fib(4);
    printf("%d\n",x);
    return 0;
}