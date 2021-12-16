//factorial fun without parameter non returning

#include<stdio.h>
void factorial()
{
int num,fact=1,i=1;
clrscr();
printf("enter number");
scanf("%d",&num);
while(i<=num)
{
fact=fact*i;
i++;
}
printf("the factorial of enter number is%d",fact);
}
void main()
{
factorial();
getch();
}

