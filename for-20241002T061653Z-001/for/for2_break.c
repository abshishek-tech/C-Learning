// Print numbers from 1 to 50
#include <stdio.h>
int main() 
{
	int i=1;
	for (i = 1; i < 100; i++)
	{
 		printf("before i= %d\n", i++);	
		if(i== 2)
 		{
		  printf("before break i= %d\n ", i++);
		  break;
		  printf("after break %d\n ", i);
		}
		printf(" after if %d\n ", i);
	}
	printf("after for i= %d\n ", i++);
	return 0;
}

