#include <stdio.h>
void main ()
{
int n1,n2;
clrscr();
printf("enter two integer");
scanf("%d%d",&n1,&n2);
if(n2%n1==0)
{
printf("it is multiplied\n",n1,n2);
}
else
{
printf("it is not multiplied\n",n1,n2);
}
getch();
}