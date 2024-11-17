//Write a C program to display prime numbers between intervals using function.

#include <stdio.h>

// Function to display prime numbers in a given range 
void displayPrimeNumbers(long long int start, long long int end) 
{
    printf("Prime numbers between %lld and %lld are:\n", start, end);
    if(start<=1){start=2;}
    int gate=0;
    for (long long int i = start; i <= end; i++) 
    {
        for(long long int j=2;j<i;j++)
        {
            if(i%j==0){gate=1;break;}
            else{gate=0;}
        }
        if(gate==0){printf("%lld ",i);}
    }
    printf("\n");
}
int main() 
{
    long long int start, end;

    // Reading the range from the user
    scanf("%lld", &start);
    scanf("%lld", &end);

    
// Calling the function to display prime numbers in the range
displayPrimeNumbers(start, end);
return 0;
}