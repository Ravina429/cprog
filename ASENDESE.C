#include<stdio.h>
void main()
{
int n1,n2;
clrscr();

printf("enter the two no.");
scanf("%d%d",&n1,&n2);
if(n1<n2)
{
printf("enterd no. is in asending order");
}
else
{
printf("enterd no. is in decending order");
}
getch();
}