//structure as function 2

#include<stdio.h>
struct employee
{
	int empno;
	char empname[20];
	
};
void pemployee(struct employee e1);
int main()
{
	struct employee e1,e2;
	e1.empno=01;
	strcpy(e1.empname,"Ravina");
	


e2.empno=02;
	strcpy(e2.empname,"Raani");
	pemployee(e1);
}
	
void pemployee(struct employee e1)
{
	printf("\n employee no. is=%d",e1.empno);
	printf("\n employee name is=%s",e1.empname);

    printf("\n employee no. is=%d",e2.empno);
	printf("\n employee name is=%s",e2.empname);
}



