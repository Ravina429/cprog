//

#include<stdio.h>
void line();
void main()
{
clrscr();
printf("\n HAPPY NEW YEAR\n");
line();
printf("\nHAPPy \nNEW \nYEAR");
line();
}
void line()
{
int i;
printf("\n");
for(i=1;i<=10;i++)
printf("-");
getch();
}