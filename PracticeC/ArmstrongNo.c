// Find whether given number is an Armstong number (a number which can be represented as the sum of its digits raised to a common power) or not
# include <stdio.h>
# include<math.h>
int main()
{   // input test number
    int a;
    printf("Enter number: ");
    scanf("%d",&a);
    int t=a;
    
    //input the digits of a into an array
    int arr[10];
    for(int i=0;i!=10;i++)
            
            {
                arr[i]=t%10;
                t=t/10;
            }
               

    //find whether a is an armstrong or not
    int sum= 0;
    for(int j=1;;j++)
        {
            for(int k=0;k!=10;k++)
            {
                sum=sum+pow(arr[k],j);
            }
            if(sum==a){printf("armstrong number\n");}
            if(sum>a){printf("not armstrong number\n");}
            if(sum>=a){break;};
            sum=0;
        }   
    return 0;
}