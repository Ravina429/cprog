//factorial fun with parameter  returning

#include<stdio.h>
int factorial(int num)
{
int i=1,fact=1;
clrscr();
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
int num;
printf("enter number");
scanf("%d",&num);
res=factorial(num);
printf("factorial of enterd number %d",res);
getch();
}

