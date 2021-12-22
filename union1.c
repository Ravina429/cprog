// a union data with members num1 of int type , num2 of float type , ch of char type

#include<stdio.h>
union data
{
	int num1;
	float num2;
	char ch;
};
int main()
{
	union data d1;
	d1.num1=123;
	printf("\n num1=%d",d1.num1);
	d1.num2=200.2f;
	printf("\n num2=%f",d1.num2);
	printf("\n num1=%d",d1.num1);
	d1.ch='R';
	printf("\n ch=%c",d1.ch);
printf("\n num2=%f",d1.num2);
	printf("\n num1=%d",d1.num1);
}
