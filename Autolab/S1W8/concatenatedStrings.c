//Write a C program to concatenate two strings without using the strcat() function.
# include<stdio.h>
# include<string.h>

int main()
{
    // create 3 strings
    char str1[50]=" ";
    char str2[50]=" ";
    char str3[50]=" ";

    // input str1 and str2
    fgets(str1,sizeof str1,stdin);
    fgets(str2,sizeof str2,stdin);

    // get string length of str1 and str2
    int len1=strlen(str1);
    int len2=strlen(str2);

    //input the values into str3 and concatenate st1 and str2
    for(int i=0;i<=len1-2;i++)
    {
        str3[i]=str1[i];
    }
    for(int i=len1-1;i<=len1+len2-3;i++)
    {
        str3[i]=str2[i+1-len1];
    }

    // print final result
    printf("Concatenated String %s\n",str3);
    
    return 0;
}