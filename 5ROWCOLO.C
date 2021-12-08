#include <stdio.h>
void main ()
{
int r,c;                    //     1
clrscr();                   //     1 0
for(r=1;r<=4;r++)           //     1 0 1
{                           //     1 0 1 0
for(c=1;c<=r;c++)
{
printf("%d",c%2);
}
printf("\n");
}
getch();
}