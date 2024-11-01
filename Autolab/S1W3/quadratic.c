#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, discriminant, realPart, imaginaryPart, root1, root2;
	scanf("%lf%lf%lf",&a,&b,&c);
	discriminant = pow(b,2) - 4 * a * c;
	if(a == 0 && b == 0)
	{
		printf("Invalid equation.\n");
		return 1;
	}
	else if (a == 0)
	{
		printf("This is a linear equation. \n");
		printf("Root = %.2lf", -c/b);
		return 2;
	}
	else if (discriminant > 0)
	{
		root1 = (-b + sqrt(discriminant)) / (2*a);
		root2 = (-b - sqrt(discriminant)) / (2*a);
		printf("Roots are real and different.\n");
		printf("Root 1 = %.2lf\n",root1);
		printf("Root 2 = %.2lf\n",root2);
	}
	else if (discriminant == 0)
	{
		root1 = root2 = (-b) / (2*a);
		printf("Roots are real and equal.\n");
		printf("Root 1 = Root 2 = %.2lf\n",root1);
	}
	else
	{ 
		printf("Roots are complex and different.\n");
		printf("Root 1 = %.2lf + %.2lfi\n", -b/(2*a), sqrt(-discriminant)/(2*a));
		printf("Root 2 = %.2lf - %.2lfi\n", -b/(2*a), sqrt(-discriminant)/(2*a));
	}
	return 0;
}
	

