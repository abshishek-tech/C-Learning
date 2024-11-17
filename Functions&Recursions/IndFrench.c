 //print hello using functions
#include<stdio.h>

// declaring a function ; have written void as we are not returning a value
void Indian();  
void French();                   

// defining main function
int main()
{   
    printf("enter i or f\n");
    char ch;
    scanf("%c",&ch);
    if(ch=='i')
        {Indian();}
    else
        {French();}                    
    return 0;
}

//define functions
void Indian()                       
{
    printf("Indian\n");                    
}
void French()
{
    printf("French\n");                   
} 