// Write a program to count the number of even and odd elements in an integer array.
# include<stdio.h>
int main()
{
    //input the number of elements in the array
    int n;
    scanf("%d",&n);

    // declare array and input the elements into the array
    int arr[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    } 
    
    //count the number of odd and even elements using counerts co and ce
    int co=0,ce=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]%2==0){ce++;}
        else{co++;}
    }
    printf("Number of even elements: %d\n",ce);
    printf("Number of odd elements: %d\n",co);
    return 0;
}