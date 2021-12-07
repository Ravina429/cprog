//wap to read the coordinates (x,y)(in cartesian system ) and find the
// quadrant to which its belong to

#include <stdio.h>
void main ()
{
int x,y;
clrscr();
printf("enter the x,y coordintes");
scanf("%d%d",&x,&y);
if(x>0 && y>0)
{
printf(" belongs to first quadrant");
}
else
if(x<0 && y>0)
{
printf(" belongs to second quadrant");
}
else
if(x<0 && y<0)
{
printf(" belongs to third quadrant");
}
else
{
printf(" belongs to fourth  quadrant");
}
getch();
}




