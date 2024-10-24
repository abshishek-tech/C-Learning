// Check whether the given character is an upper case or lower case character
#include <stdio.h>
int main(){
char c;
scanf("%c", &c);
if(c>='a' && c<='z'){
    printf("lower case");
}
else if(c>='A' && c<='Z'){
    printf("upper");
}
else{
    printf("ooga booga");
}
    return 0;
}