//print hello using functions
#include<stdio.h>
void printhello();                      // declaring a function ; have written void as we are not returning a value

int main()
{
    printhello();                       //caling on function
    return 0;
}
void printhello()                       //declaring again to define
{
    printf("Hello\n");                    // defining function
}