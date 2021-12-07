#include <stdio.h>
void main ()                          //1234
{                                  //   123
int r,c;                             // 12
clrscr();                           //  1
for (r=4;r>=1;r--)
{
for (c=1;c<=r;c++)
{
printf("%d",c);
}
printf("\n");
}
getch();
}