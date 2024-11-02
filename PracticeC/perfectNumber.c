// find and list the perfect the perfect numbers (+ve nat numbers that can be written as the sum of their factors, ike 6=1+2+3) in given range.
# include<stdio.h>
int main()
{   //take range input
    int a,b;
    scanf("%d%d",&a,&b);
    
    //code it out
    printf("perfect numbers: ");
    for(int i=a;i<=b;i++)                   // select number btw a and b to test
    {
        if(i<=0){continue;}                 
        int sum=0;
        for(int j=1;j<i;j++)                // find the sum of factors of test case not including the test case itself
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==i){printf("%d ,",i);}       // print the obtained numbers
    }
    printf("\n");
    return 0;
}