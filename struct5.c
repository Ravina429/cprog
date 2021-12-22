//sructure to store student roll no name marks three sub and calculate of three subject

#include<stdio.h>
struct student 
{
	int m1;
	int m2;
	int m3;
	float per;
	int rno;
	char name[20];
};
int main()
{
	struct student s1;
	printf("\n enter the student rno,name and marks of three subject");
	scanf("%d%s%d%d%d",&s1.rno,&s1.name,&s1.m1,&s1.m2,&s1.m3);
	 
	 s1.per=(s1.m1+s1.m2+s1.m3)*100/300.0;
	 
	 printf("\n rno=%d name=%s per=%f",s1.rno,s1.name,s1.per);
	 
}
