// find whether given number is a happy number or not. In number theory, a happy number is a number which eventually reaches 1 when replaced by the sum of the square of each digit
#include<stdio.h>
#include<math.h>
int main()
{
    //take input
    int a;
    printf("test number: ");
    scanf("%d",&a);

    //to check for happy number
    int k=a;
    int sum=0;
    for(int i,o=0;;o++)
    {   i=k%10;
        
        sum=sum+pow(i,2);
        k=k/10;
        if(k==0)
        {
            k=sum;
            if(sum==1){printf("happy number \n");break;}
            if(sum==a){printf("not happy number\n");break;}
            sum=0;
        }
        if(o==50){printf("not happy number\n");break;}


    }
    return 0;

}