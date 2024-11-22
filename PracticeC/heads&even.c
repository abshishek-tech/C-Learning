// print the outcomes when flipping a coin by performing  user iputted number of trials
#include <stdio.h>
#include <stdlib.h>
int main()

{
    printf("how many trials: ");
    float trials;
    scanf("%f", &trials);

    int chh = 0, cht = 0, ctt = 0; //
    for (int i = 0; i < trials; i++)
    {
        int d1, d2;
        d1 = rand() % 2; // use rand() function to create outputs
        d2 = rand() % 2;
        printf("%d\n",d1);
        printf("%d\n",d2);

        int sum = d1 + d2;
        if (sum == 0)
        {
            chh = chh + 1;
        }
        if (sum == 1)
        {
            cht = cht + 1;
        }
        if (sum == 2)
        {
            ctt = ctt + 1;
        }
    }
    printf("%.2f  %.2f  %.2f  \n", chh / trials, cht / trials, ctt / trials);
    return 0;
}