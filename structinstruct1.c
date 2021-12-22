//full name of employee
#include<stdio.h>
int main()
struct name
{
	char fname[20];
	char mname[20];
	char lname[20];
	
};
struct employee
{
	int code;
	struct name ename[20];
	float sal;
	
};

{
	struct employee e,e2;
	printf("\n enter the employee code");
	scanf("%d",&e.code);
	printf("\n enter fist middle and the last name");
	scanf("%s%s%s",&e.ename.fname,&e.ename.mname,&e.ename.lname);
	printf("\n enter the salary");
	scanf("%f",&e.sal);
	
	e2.code=e.code;
	e2.ename=e.ename;
	e2.sal=e.sal;
	printf("\ncode =%d",e2.code);
	printf("\n%s %s %s",e2.ename.fname,e2.ename.mname,e2.ename.lname);
	printf("\n  salary =%f",e2.sal);
	

}
