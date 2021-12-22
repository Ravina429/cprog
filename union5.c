#include<stdio.h>
union employee
{
	int code;
	char name[20];
};
int main()
{
	union employee e1;
	printf("\n enter the code and name of employee");
	scanf("%d%s",&e1.code,&e1.name);
	printf("\n code=%d name=%s",e1.code,e1.name);
	
}
