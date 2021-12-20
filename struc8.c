// 5 - create a structure employee having members empno,empname , salary , designation

#include<stdio.h>
#include<string.h>
struct employee
{
	int empno;
	char empname[30];
	float salary;
	char designation[40];
	
};
int main()
{
struct employee e1;
e1.empno=20;
strcpy(e1.empname,"RAVINA WAGHMARE");
e1.salary= 40000.22f;
strcpy(e1.designation,"Dot Net Devloper");
printf("\n employee no =%d",e1.empno);
printf("\n employee name =%s",e1.empname);
printf("\n employee salary =%f",e1.salary);
printf("\n employee designation =%s",e1.designation);
}
