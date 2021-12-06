#include <stdio.h>
void main ()
{
int num,fact=1,i;
clrscr();
printf("enter a number");
scanf("%d",&num);
i=1;
while(i<=num)
{
fact=fact*i;
i++;
}
printf("%d",fact);
getch();
}