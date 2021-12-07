//wap that reads two numbers and divide the first number by second number .
//if the division not possible print "division not possible"

#include <stdio.h>
void main()
{
int a,b,div;
clrscr();
printf("enter two number");
scanf("%d%d",&a,&b);
if(a>b)
{
div=a/b;
printf("it is divisible =%d",div);
}
else
{
printf("it is not divisible");
}
getch();
}