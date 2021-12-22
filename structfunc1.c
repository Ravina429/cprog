//structure as function 

#include<stdio.h>
struct employee
{
	int empno;
	char empname[20];
	
};
void pemployee(struct employee e1);
int main()
{
	struct employee e1;
	e1.empno=01;
	strcpy(e1.empname,"Ravina");
	pemployee(e1);
	
}
void pemployee(struct employee e1)
{
	printf("\n employee no. is=%d",e1.empno);
	printf("\n employee name is=%s",e1.empname);
}

