// print fibanocci series upto n values
#include <stdio.h>

int main() {
  int i=1,a=1,b=0,sum,n;
  scanf("%d",&n);

  for(;i<=n;i++){
    sum = a + b;
    b = a;
    a = sum;
    printf("%d ",sum);  
  }
  
    return 0;
}
