//Write a program in C to find the sum of the series 1!/1+2!/2+3!/3+4!/4+5!/5 using the function by passing appropriate parameters and return values.

#include<stdio.h>

double sumOfSeries(int n);

int main()
{
    int n;                                                           // Reading the value of n from the user
    scanf("%d", &n);
    double result = sumOfSeries(n);                                  // Calling the function to get the sum of the series
    printf("The sum of the series is:%.2lf\n", result);              // Displaying the result

    return 0;
}

double sumOfSeries(int n)
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        int fact=1; 
        for(int j=1;j<=i;j++)
        {
            fact=fact*j;
        }
        sum=sum+fact;
    }

    return sum;
}