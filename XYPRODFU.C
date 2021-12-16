//product of 2 number return

#include<stdio.h>
int mul(int x,int y);
int main()
{
int x,y;
clrscr();
printf("enter two number");
scanf("%d%d",&x,&y);
printf("\nproduct of %d and %d is %d",x,y,mul(x,y));
}
int mul(int x,int y)
{
return x*y;
getch();
}