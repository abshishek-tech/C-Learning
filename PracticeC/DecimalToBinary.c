#include<stdio.h>
#include<math.h> // when compiling use: gcc file_name -lm
unsigned long long int main() {
unsigned long long int a,sum=0,b=0,c,d=10;
scanf("%lld",&a);
for(int i=0;a!=0;a=a/2,i++){
  b = a%2;
  c=(pow(d,i))*b;
  sum = sum+c;
}
printf("%lld",sum);
  return 0;
}