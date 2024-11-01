// find all the numbers divisible by 3 and 5 between o and n
# include<stdio.h>
int main() {
    int n,b=15;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        {if(i%b==0)
        {printf("%d ,",i);}
        }   

    return 0;
}