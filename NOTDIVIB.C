//wap to cal sum of all numbers not divisible by 17 between two given integer

#include<stdio.h>
void main()
{
int n1,n2,i,sum=0;
clrscr();
printf("enter the two integer ");
scanf("%d%d",&n1,&n2);
for(i=n1;i<=n2;i++)
if(i%17!=0)
{
sum=sum+1;
}
printf("sum of numbers not divisible by 17 between %d & %d=%d",n1,n2,sum);
getch();
}