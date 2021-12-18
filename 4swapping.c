//swap number

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("\nenter the two numbers");
	scanf("\n%d%d",&a,&b);
	c=a;
	d=b;
	a=d;
	b=c;
	printf("\nafter swapping %d%d",a,b);
}
