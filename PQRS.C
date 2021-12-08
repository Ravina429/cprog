#include <stdio.h>
void main ()
{
int p,q,r,s,a,b;
clrscr();
printf("enter the 4 integer value");
scanf("%d%d%d%d",&p,&q,&r,&s);
if(q>r && s>p)
{
a=r+s;
b=p+q;
}
if(a>b)
{
printf("it is correct value");
}
else
{
printf("it is not correct value");
 }
 getch();
 }