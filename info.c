#include<stdio.h>
int main()
{
int rn;
char n[100],h[100],b[100];
printf("enter name=");
gets(n);
printf("enter branch=");
gets(b);
printf("hobbies=");
gets(h);
printf("enter regd.number=");
scanf("%d",&rn);
printf("enter\n\n name=%s\n regd.number=%d\n branch=%s\n hobbies=%s",n,rn,b,h);
 return 0;
}