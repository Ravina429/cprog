 //- repeat the above program accepting values from the user for 3 different employees.

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
struct employee e1,e2,e3;
printf("\n enter the employee no");
scanf("%d",&e1.empno);
printf("\n enter the employee name");
scanf("%s",&e1.empname);
printf("\n enter the employee salary");
scanf("%f",&e1.salary);
printf("\n enter the employee designation");
scanf("%s",&e1.designation);

printf("\n employee no =%d",e1.empno);
printf("\n employee name =%s",e1.empname);
printf("\n employee salary =%f",e1.salary);
printf("\n employee designation =%s",e1.designation);



printf("\n enter the employee no");
scanf("%d",&e2.empno);
printf("\n enter the employee name");
scanf("%s",&e2.empname);
printf("\n enter the employee salary");
scanf("%f",&e2.salary);
printf("\n enter the employee designation");
scanf("%s",&e2.designation);

printf("\n employee no =%d",e2.empno);
printf("\n employee name =%s",e2.empname);
printf("\n employee salary =%f",e2.salary);
printf("\n employee designation =%s",e2.designation);


printf("\n enter the employee no");
scanf("%d",&e3.empno);
printf("\n enter the employee name");
scanf("%s",&e3.empname);
printf("\n enter the employee salary");
scanf("%f",&e3.salary);
printf("\n enter the employee designation");
scanf("%s",&e3.designation);

printf("\n employee no =%d",e3.empno);
printf("\n employee name =%s",e3.empname);
printf("\n employee salary =%f",e3.salary);
printf("\n employee designation =%s",e3.designation);


}
