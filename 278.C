#include <stdio.h>
void main ()
{                           //     1 2 3 4 5
int r,c;                    //     1 2 3 4 5
clrscr();                    //    1 2 3 4 5
for (r=1;r<=3;r++)           //
{
for (c=1;c<=5;c++)
{
printf("%d",c);
}
printf("\n");
}
getch();
}