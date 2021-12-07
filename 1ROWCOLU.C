#include <stdio.h>
void main ()
{                           //      1
int r,c;                    //      12
clrscr();                   //      123
for (r=1;r<=4;r++)          //      1234
{
for (c=1;c<=r;c++)
{
printf("%d",c);
}
printf("\n");
}
getch();
}