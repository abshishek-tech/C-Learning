#include<stdio.h>
int main()
{
    char ch[20];
    float a, b, c;
    scanf("%s", ch);
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    printf("Student Roll Number:%s\n", ch);
    printf("Total Marks:%f\n", a+b+c);
    printf("Average Marks: %f\n", (a+b+c)/3);
    return 0;
}