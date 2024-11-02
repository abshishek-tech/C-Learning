// print the prime numbers in a given range

# include<stdio.h>
int main()
{   //take range input
    int a,b;
    scanf("%d%d",&a,&b);
    
    //code it out
    printf("prime numbers: ");
    for(int i=a;i<=b;i++)                   // select number btw a and b to test
    {
        if(i<=1){continue;}                 
        int test=1;
        for(int j=2;j<i;j++)                // find if any factor of test case is unequal to test case
        {
            if(i%j==0)
            {
               if(j!=i){test=0;break;}
            }
        }
        if(test==1){printf("%d ",i);}
    }
    printf("\n");
    return 0;
}