#include <stdio.h>
#include <math.h>

int main()
{
double num1, num2, result;
int c;
printf("Select an operation from the menu:\n1. Addition (+)\n2. Subtraction (-)\n3. Multiplication (*)\n4. Division (/)\n5. Exponentiation (^)\n6. Square Root (r)\n7. Logarithm (l)\nEnter your choice (1-7): ");
scanf("%d",&c);
if (c==1)
{
scanf("%lf%lf",&num1,&num2);
result = num1 + num2;
printf("%.2lf\n",result);
}
else if (c==2)
{
scanf("%lf%lf",&num1,&num2);
result = num1 - num2;
printf("%.2lf\n",result);
}
else if (c==3)
{
scanf("%lf%lf",&num1,&num2);
result = num1 * num2;
printf("%.2lf\n",result);
}
else if (c==4)
{
scanf("%lf%lf",&num1,&num2);
if (num2 == 0)
{
printf("Error: Division by zero is not allowed.\n");
}
else
{
result = num1 / num2;
printf("%.2lf\n",result);
}
}
else if (c==5)
{
scanf("%lf%lf",&num1,&num2);
result = pow(num1,num2);
printf("%.2lf\n",result);
}
else if (c==6)
{
scanf("%lf",&num1);
if (num1 < 0)
{
printf("Error: Cannot compute square root of a negative number.\n");
}
else
{
result = sqrt(num1);
printf("%.2lf\n",result);
}
}
else if (c==7)
{
scanf("%lf",&num1);
if (num1<=0)
{
printf("Error: Logarithm of non-positive numbers is not defined.\n");
}
else
{
result = log(num1);
printf("%.2lf\n",result);
}
}
else
{
printf("Error: Invalid choice. Please select a valid option from the menu.\n");
}
return 0;
}
