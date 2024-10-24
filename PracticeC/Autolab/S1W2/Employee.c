#include <stdio.h>
int main()
{
    float a, b, c, d;
    scanf("%f\n", &a);
    printf("Basic Pay:%f\n", a);
    b=(a*40)/100;
    printf("DA:%f\n", b);
    c=(a*20)/100;
    printf("HRA:%f\n", c);
    printf("Gross Pay:%f\n", a+b+c);
    return 0;
}