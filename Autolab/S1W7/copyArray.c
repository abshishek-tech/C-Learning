//Write a program to copy all elements of one array into another array.
# include<stdio.h>
int main()
{
    //input the number of elements in the array
    int n;
    scanf("%d",&n);

    // declare array and input the elements into the array
    int arr1[n];
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr1[i]);
    } 

   // decalre new array and input the values into that
   int arr2[n];
   for (int i=0;i<n;i++)
   {
        arr2[i]=arr1[i];
   } 

   // print the elements
   for(int i=0;i<n;i++)
   {
        printf("%d ",arr2[i]);
   }     
    return 0;
}