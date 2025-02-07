// there are N closed doors in a line, first time you traverse across them you perform an operation on them, the 2nd time you go to every other door and perform said operstion, then you traverse 3rd time and perform an operation on e very 3rd door and son until you traverse N number of times in a similar fashion. How many f=doors are open after this

#include <stdio.h>
# include<math.h>
int main()
{
    int N;

    scanf("%d", &N);
    int arr[N];
    for (int i = 1; i <= N; i++)
    {
        arr[i] = 0;
    }
// upon observation we find that number of open doors = [N^0.5] , where [] denotes the greatest integer function

int a = pow(N,0.5) - (N % N);
printf("Number of open doors = %d\n", a);
    return 0;
}