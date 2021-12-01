#include <stdio.h>
void main ()
{
int day, week, years;
clrscr();
printf("enter the days");
scanf("%d",&day);
years=day/365;
week=(day%365)/7;
day=day-((years*365)+(week*7));
printf("years=%d\n",years);
printf("weeks=%d\n",week);
printf("days=%d\n",day);
getch();
}
