//example of auto storage class

#include<stdio.h>

void displaynum();
int main()
{
	auto int num1=20;
	int num2=40;
	printf("\n num1=%d",num1);
	printf("\n num2=%d",num2);
	displaynum();
}
void displaynum()
{
	printf("\n num1=%d",num1);
	printf("\n num2=%d",num2);
}


