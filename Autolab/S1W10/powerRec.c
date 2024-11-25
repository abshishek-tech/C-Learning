// C program for the above approach
#include <stdio.h>

long long int power(long long int x, long long int n)
{
    // If x^0 return 1
    if (n == 0)
        return 1;

    // If we need to find of 0^y
    if (x == 0)
        return 0;
    // For all other cases
    return x * power(x, n - 1);
}

// Driver Code
int main()
{
   long long int x,n;
    scanf("%lld%lld",&x,&n);
    // Function call
    printf("%lld raised to the power of %lld is: %lld.0000000000",x,n, power(x, n));
    L1:
    return 0;
}