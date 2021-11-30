#include <stdio.h>
void main()
{
int v,l,w,h;
clrscr();
printf("enter the value oflengh, width and height");
scanf("%d%d%d",&l,&w,&h);
v=l*w*h;
printf("volume of rectangle=%d",v);
getch();
}