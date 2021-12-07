
#include<stdio.h>
void main()
{
int r,a,b,c;
clrscr();
printf("enter r");
scanf("%d",&r);
a=0;
b=1;
printf("%d%d",a,b);
c=0;
while(c<=r)
{
c=a+b;                  // 1
if(c<=r)
printf("%d",c);
a=b;
b=c;
}
getch();
}

