#include <stdio.h>
void main ()
{
int h,sp,str;
clrscr();                   //               1
for(h=1;h<=4;h++)             //            1 2
{                              //          1 2 3
for(sp=0;sp<=40-h;sp++)        //         1 2 3 4
{
printf(" ");
}
for(str=1;str<=h;str++)
{
printf (" %d",str);
}
printf("\n");
}
getch();
}