//factorial fun without parameter  returning

#include<stdio.h>
int factorial()
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
return fact;
}
int main()
{
int res;
res=factorial();
printf("the factorial of enter number is%d",res);
getch();
}

