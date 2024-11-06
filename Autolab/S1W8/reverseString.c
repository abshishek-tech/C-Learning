//Write a C program to print individual characters of a string in reverse order.
//Input: Hello
/*Output:   o
            l
            l
            e
            H
*/
# include<stdio.h>
# include<string.h>

int main()
{
char str1[50]=" ";

fgets(str1,sizeof str1,stdin);

int len1=strlen(str1);

for(int i=len1-2;i>=0;i--)
{
    printf("%c\n",str1[i]);
}
return 0;
}