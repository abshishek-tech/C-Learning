/*
print the following kind of pattern
   *
  * *
 * * *
* * * *
*/

# include<stdio.h>
int main()
{
    // take how many rows to be taken
    int rows;
    printf("input number of rows: ");
    scanf("%d",&rows);

    //code it out 
    for(int i=0;i<rows;i++)
        {
            //print the space bars(= number of rows-row number)
            for(int k=0;;k++)
                {   
                    if(k==rows-i){break;}
                    printf(" ");
                }
            //print the * required
            for(int j=0;j<=i;j++)
                {
                    printf("* ");
                }
            printf("\n");
        }
    return 0;
}
