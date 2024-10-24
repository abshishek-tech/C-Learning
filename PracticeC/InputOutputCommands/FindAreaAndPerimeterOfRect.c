//    Write a program to take the value of sides from the user and give area and perimeter of a 4 sided regular polygon.
 # include<stdio.h>
 int main () {
    float a,b ;
    printf("input length of side a : ") ;
    scanf("%f", &a) ;
    printf("enter length of side b :  ") ;
    scanf("%f", &b) ;
    
    float area = a * b ;
    printf("perimeter is %f \n", a + a + b + b ) ;
    printf("area is %f \n", area ) ;
    return 0 ;
 } 

 