#include<stdio.h>
#include<conio.h>
void main()
{
int num;
clrscr();
printf("enter any number to check even or odd:");
scanf("%d",&num);
switch(num%2)
{
case 0:
printf("number is even");
break;
case 1:
printf("number is odd");
break;
}
getch();
}
