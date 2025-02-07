# include <stdio.h>
int a =3;
void kar(){printf("%d\n",a);}
int main()
{
    extern int a;
         a=a-1;

printf("%d\n",a);

kar();
    return 0;
}