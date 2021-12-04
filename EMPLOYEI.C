//write a c program that accept employees id, total worked hours of a month.

#include <stdio.h>
void main ()
{
int emp,hr,a;
float b;
clrscr();
printf("enter the employees id and total hr and amount user received per hr");
scanf("%d%d%%d",&emp,&hr,&a);
b=hr*a;
printf("salary of perticular month=%f",b);
printf("employees id =%d",emp);
getch();
}