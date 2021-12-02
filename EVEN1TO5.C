#include <stdio.h>
void main ()
{
int i;
clrscr();
i=1;
while(i<=50)
{
if(i%2==0)
{
printf("%d",i);
}
i=i+1;
}
getch();
}