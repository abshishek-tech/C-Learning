//Write a C program to copy a string without using the strcpy() function.
// Input: Source String: Hello World                Output: Copied String: Hello World
# include<stdio.h>
# include<string.h>

int main()
{
char str1[50]=" ";
char str2[50]=" ";

fgets(str1,sizeof str1,stdin);

int len1=strlen(str1);

for(int i=0;i<=len1-2;i++)
{
    str2[i]=str1[i];
}

printf("Copied String: %s\n",str2);
return 0;
}