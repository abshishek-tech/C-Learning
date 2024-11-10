#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
int index=0,cAlpha=0,cDigit=0,cSpec=0;
 char str[50],temp[50];
 scanf("%[^\n]s",str);
for(int i = 0;i<strlen(str);i++){
int Dup = 0;
for(int j = 0;j<index;j++){
if(str[i]==temp[j]){
Dup = 1;
break;
}}
if(!Dup){
temp[index]=str[i];
index+=1;
}
}
 for(int i =0;i<strlen(temp);i++){
 if(isalpha(temp[i])){
 cAlpha+=1;
}
else if(isdigit(temp[i])){
cDigit+=1;
}
else
cSpec+=1;
}
printf("No of alphabets:%d\nNo of digits:%d\nNo of special characters:%d\n",cAlpha,cDigit,cSpec);

}