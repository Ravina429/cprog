#include<stdio.h>
int largesmall(int);

void main()
{
	int a,b;
	printf("\n enter the two number samllest and largest");
	scanf("%d%d",&a,&b);
	if(a==b)
	{
		printf("\n both are equal");
	}
	else
	if(a<b)
	{
		printf("\n largest number %d",b);
		printf("\n smallest number %d",a);
	}
	else
	{
		printf("\n largest number %d",a);
		printf("\n smallest number %d",b);
	}
}
