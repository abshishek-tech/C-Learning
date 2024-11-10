# include<stdio.h>
# include<string.h>
int main()
{   
    // create 2 strings
    char str1[50]=" ";
    char str2[50]=" ";

    // input str1 and str2
    fgets(str1,sizeof str1,stdin);
    fgets(str2,sizeof str2,stdin);

    // get string length of str1 and str2
    int len1=strlen(str1);
    int len2=strlen(str2);

    int index,gate =0;
    for(int i=0;i<=len1-len2;i++)
    {
        if(str2[0]==str1[i])
        {
            index=i;
            for(int j=0;j<=len2-3;j++)
            {
                if(str2[j]==str1[i+j]){gate=1;}
                else{gate=0;break;}
            }
            if(gate==0){break;}
        }
        if(gate==1){break;}
    }
    if(gate==1){printf("Substring found at index %d",index);}
    return 0;
}