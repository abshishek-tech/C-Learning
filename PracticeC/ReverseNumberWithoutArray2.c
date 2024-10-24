#include <stdio.h>

int main()
 {
    int a, b= 0,r;
    scanf("%d", &a);

    while(a != 0) 
    {
        r= a % 10;
        b = b * 10 + r;
        a /= 10;
    }

    printf("Reversed number: %d\n", b);
    return 0;
}