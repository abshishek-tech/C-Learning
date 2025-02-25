// Tell if given number is power of 2 or not
#include <stdio.h>

void checker(int n)
{
  if (n & (n - 1))
  {
    printf("Number is not power Of 2");
  }
  else
  {
    printf("Number is power Of 2");
  }
}

int main()
{
  int n;
  scanf("%d", &n);
  checker(n);
  return 0;
}