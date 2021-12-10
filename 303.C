#include <stdio.h>
void main ()
{
int h,sp,str;
clrscr();
for(h=5;h>=1;h--)
{
for(sp=0;sp<=40-h;sp++)
{
printf(" ");
}
for(str=1;str<=h;str++)
{
printf("%d",h);
}
printf("\n");
}
getch();
}