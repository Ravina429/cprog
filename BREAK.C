#include<stdio.h>
void main()
{
int i;
clrscr();
i=1;
while(i<=10)
{
if(i==5)
continue;
printf("%d",i);
i++;
}
getch();
}