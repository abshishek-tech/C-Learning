//Write a C program to sort a string array in ascending order using bubble sort. 
#include<stdio.h>
#include<string.h>
int main()
{
        int words;
        printf("How many words to compare: ");
        scanf("%d", &words);
        char str[words-1][100];
        char temp[100];
        for(int i=0; i<words+1; i++)
        {
                fgets(str[i], sizeof(str[i]), stdin);
        }
        for(int i=1; i<words; i++)
        {
            if (strcmp(str[i],str[i+1])>0)
                {
                    strcpy(temp, str[i]);
                    strcpy(str[i], str[i+1]);
                    strcpy(str[i+1], temp);                    
                    i--;
                }
        }
        for (int i = 0; i < words+1; i++) 
        {
                printf("%s", str[i]);
        }
        return 0;
}