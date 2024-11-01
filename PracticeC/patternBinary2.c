// binary representation should be of 10101010... or 101010101... pattern
#include <stdio.h>

int main()
{
    int a, res = 0, checker, alt = 1;
    scanf("%d", &a);

    if (a % 2)
    {
        checker = 1;
    }
    else {
        checker = 2;
    }

    while (a != 0)
    {
        res = (a & 3) ^ checker;
        a >>= 2;
        if (res != 0)
        {
            alt = 0;
            break;
        }
    }

    printf("%d", alt);
    
    return 0;
}