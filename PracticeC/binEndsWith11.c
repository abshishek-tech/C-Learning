// find whether the 2 least important bit of binary of given number ends with is 11 without conversion 
# include<stdio.h>
int main()
{
int a,b;
scanf("%d",&a);
b=a&3;
if(b==3)
printf("yes");
else
printf("no");
    return 0;
} 