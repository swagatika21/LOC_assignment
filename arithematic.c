#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,a,s,m,mod;
float d;
clrscr();
printf("enter two numbers:");
scanf("%d%d",&x,&y);
a=x+y;
s=x-y;
m=x*y;
mod=x%y;
d=(x/y);
printf("addition=%d\n",a);
printf("substraction=%d\n",s);
printf("multiplication=%d\n",m);
printf("modulus=%d\n",mod);
printf("division=%f\n",d);
getch();
} 