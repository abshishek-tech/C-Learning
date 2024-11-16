#include <stdio.h>
#include <string.h>

int main(){
char str[50];

int count=0;
scanf("%[^\n]s",str);

char* token = strtok(str," ");
while(token!=NULL){
count++;

token = strtok(NULL," ");
} 

printf("%d",count);
}