#include <stdio.h>
int main()
{
    int a = 22;
    int *ptr1 = &a;        // * ---> 'value at address' operator
                           // & ---> 'addres' operator
    printf("%d\n", *ptr1); // dereferencing the pointer 
    printf("%d\n", a);
    printf("%d\n", *(&a)); 

    printf("%p\n", ptr1); // print address of variable 'a' that is stored in ptr1
    printf("%p\n", &a);
    printf("%p\n", &ptr1); // print address of pointer variable

    // now instead of %p we use %u ---> unsigned int to print the addres ; warning sign will be displayed

    printf("%u\n", &a);
    printf("%u\n", ptr1);
    printf("%u\n", &ptr1);
    return 0;
}
