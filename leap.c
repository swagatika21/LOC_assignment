#include<stdio.h>
#include<conio.h>
void main()
{
int y;
clrscr();
printf("enter any year:");
scanf("%d",&y);
if(y%4==0||y%100==0)
{
printf("leap year");
}
else
{
printf("not a leap year");
}
getch();
}