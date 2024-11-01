// reverse the number 123 to 321
#include <stdio.h>

int main()
{
int a;
scanf("%d",&a);
printf("Reversed number: ");
for(int i=1;a!=a%10;a=a/10){
    printf("%d",a%10);
}
printf("%d",a);
    return 0;
}
