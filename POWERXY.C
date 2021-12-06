//wap to enter x & y to the keyboard and show the power

#include<stdio.h>
void main()
{
int i,x,y,r;
clrscr();
printf("enter the x & y");
scanf("%d%d",&x,&y);
i=1;
r=1;
while(i<=y)
{
r=r*x;           //2     //4    //8
i++;               //2     //3    //4
}
printf("power=%d",r);
getch();
}

