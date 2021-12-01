#include <stdio.h>
void main()
{
int ave,km,l;
clrscr();
printf("enter the value of distance");
scanf("%d",&km);
printf("enter the value of fuel");
scanf("%d",&l);
ave=km/l;
printf("average of bike=%d",ave);
getch();
}