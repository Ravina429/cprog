#include <stdio.h>
void main ()
{
int v, r,h;
printf("enter the value of radius and height");
scanf("%d%d",&r,&h);
v=0.3*3.142*r*r*h;
printf("the value of volume of cone=%d",&v);
getch();
}