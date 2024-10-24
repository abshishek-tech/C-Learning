// binary representation should be of 10101010... or 101010101... pattern
#include<stdio.h>
#include<math.h> // when compiling use: gcc file_name -lm
 long long int main() {
 long long int a,bin=0,b=0,c,d=10;
scanf("%lld",&a);
for(int i=0;a!=0;a=a/2,i++)
{
  b = a%2;
  c=(pow(d,i))*b;
  bin = bin+c;
}
printf("%lld\n",bin);

  int x,y,z;
  if(bin%10==0)
  {
    for(;bin!=0;bin=bin/100)
    {
        x=bin%100;
        if(x!=10)
        {
            printf("no\n"); 
            break;
        }
        else if (x==10 && bin==10)
        {
            printf("yes\n");
        }
    }
  }
  if(bin%10==1)
  {
    for(;bin!=0;bin=bin/100)
    {
        x=bin%100;
        if(x!=1)
        {
            printf("no\n"); 
            break;
        }
        else if (x==1 && bin==1)
        {
            printf("yes\n");
        }
        
    }

    
  }

  return 0;
}
