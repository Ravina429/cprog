#include <stdio.h>
void circle(float r);
void main()
{
float r;
printf(" enter the radius");
scanf("%f",&r);
circle(r);
}
void circle(float r)
{
float c,a,v;
c=2*3.14*r;
a=3.14*r*r;
v=4/3*3.14*r*r*r;
printf("the circumference of circle =%.2f",c);
printf("\nthe area of circle=%.2f",a);
printf("\nthe volumeof circle =%.2f",v);
getch();
}