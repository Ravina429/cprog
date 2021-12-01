#include <stdio.h>
void main ()
{
int ave,km,l;
clrscr();
printf("enter the total distance and spent fuel");
scanf("%d%d",&km,&l);
ave=km/l;
printf("average of bike=%d",ave);
getch();
}