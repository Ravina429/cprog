
// create func factorial with one int parameter to accept no. to calculate
//and display the factorial of number.

#include<stdio.h>
void factorial()
{
int num,fact=1,i=1;
clrscr();
printf("enter any integer");
scanf("%d",&num);
while(i<=num)
{
fact=fact*i;
i++;
}
printf("factorial of enter no. is=%d",fact);
}
void main()
{
printf("\ncalling func factorial from main func\n");
factorial();
getch();
}
