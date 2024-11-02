/*print the following form of patterns
*
**
***
****
*****
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
            for(int j=0;j<=i;j++)       //print *
                {
                    printf("* ");       
                }
            printf("\n");               //change line
        }
    return 0;
}