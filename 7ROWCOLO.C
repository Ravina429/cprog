#include <stdio.h>
void main ()
{                               //         1
int r,c,n=1;                         //    2 3
clrscr();                        //        4 5 6
for(r=1;r<=4;r++)             //           7 8 9 10
{
for(c=1;c<=r;c++)
{
printf("%d",n++);
}
printf("\n");
}
getch();
}
