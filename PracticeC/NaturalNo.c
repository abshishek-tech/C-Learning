// Find whether given number is natural or not
# include<stdio.h>
# include<math.h>

int main(){
float a;
scanf("%f", &a);
a= a - (int)a ;
if(a==0){
    printf("int");
}
else{
    printf("not int");
}
return 0;
}
