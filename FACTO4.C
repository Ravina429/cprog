//factorial fun with parameter not returning

#include<stdio.h>
void factorial(int num)
{
int i=1,fact=1;
clrscr();
while(i<=num)
{
fact=fact*i;
i++;
}
printf("factorial of enterd number is %d",fact);
}
int main()
{
int num;
printf("enter number");
scanf("%d",&num);
factorial(num);
getch();
}

