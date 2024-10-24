#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("Bitwise AND of %d and %d:%d\n",a , b, a&b);
    printf("Bitwise OR of %d and %d:%d\n",a, b, a|b);
    printf("Bitwise XOR of %d and %d:%d\n", a, b, a^b);
    return 0;
}