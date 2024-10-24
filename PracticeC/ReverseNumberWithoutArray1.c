# include<stdio.h>
# include<math.h>

// Long Method
int main() {

long long int a,k,x;
printf("Input number: ");
scanf("%lld",&a);
x=a;

// To find the number of digits in a
for(int i=0;a!=0;)
{   long long int b;
    b=a%10;
    i=i+1; 
    a=a/10;
    k=i;
}
printf("Number of digits in number: %lld\n",k);

// To reverse 'a'
long long int c,b=0,t=10;
for(int i=k;i!=0;)
{
int d=x%10;
c=(pow(t,i-1))*d;;
b=b+c;
x=x/10;
i=i-1;
}
printf("Reverse Number: %lld\n",b);
    return 0;
    
}