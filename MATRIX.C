#include <stdio.h>
void main ()
{                    //   1
int r,c;
clrscr();
for (r=1;r<=4;r++)
{
for (c=1;c<=5;c++)
{
printf("%d%d",r,c);
}
printf("\n");
}
getch();
}