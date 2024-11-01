// tell how the weather is
# include<stdio.h>
int main (){
int t;
scanf("%d",&t);
if(t<0){
    printf("Freezing cold");
}
else if(t>=0 && t<=20){
    printf("Cold");
}
else if(t>20 && t<=30){
    printf("Warm");
}
else{printf("Hot");}
    return 0;
}