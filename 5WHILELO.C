#include <stdio.h>
void main()
{
int i;
clrscr();
i=4;
while(i<20)
{
if(i%4==0)
{
printf("%d",i);
}
i=i+1;
}
getch();
}