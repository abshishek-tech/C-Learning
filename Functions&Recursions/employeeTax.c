#include <stdio.h>

void cal(void);

void main()
{
int i,n;
printf("\nENTER THE NUMBER OF EMPLOYEES:");
scanf("%d",&n);
for(i=1;i<=n;i++) cal();
}

void cal()
{
int basic;
float tax;
printf("\nENTER THE AMOUNT OF BASIC: ");
scanf("%d",&basic);
if(basic<9000)
tax=basic*20/100;
else
tax=basic*25/100;
printf("\nTHE AMOUNT OF TAX IS %0.2f\n",tax);
}