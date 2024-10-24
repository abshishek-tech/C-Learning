# include <stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    printf("Character:%c\n",ch) ;
    printf("Decimal:%d\n", (unsigned char)ch) ;
    printf("Octal:%o\n",(unsigned char)ch) ;
    printf("Hexadecimal:%X\n",(unsigned char)ch) ;
return 0 ;
}