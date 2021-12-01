#include <stdio.h>
void main ()
{
float w1,w2,p1,p2,ave;
clrscr();
printf("weight of item 1");
scanf("%f",&w1);
printf("weight of item 2");
scanf("%f",&w2);
printf("purchase of item 1");
scanf("%f",&p1);
printf("purchase of item 2");
scanf("%f",&p2);
ave=(((w1*p1)+(w2*p2))/(p1+p2));
printf("\nave value=%f",ave);
getch();
}