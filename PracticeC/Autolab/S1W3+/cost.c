#include <stdio.h>


int main()
{

float p1, p2, p3, total, disc, final;

scanf("%f %f %f", &p1, &p2, &p3);

total = p1 + p2 + p3;
disc = 0;

if (total > 100)
{
	disc = total / 10;
}
final = total - disc;

printf("Total Cost=%.2f\nDiscount=%.2f\nFinal Cost=%.2f", total, disc, final);

return 0;
}
