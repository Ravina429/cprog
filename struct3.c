//create a structure student having members rno,name,course,fees pass this structure to print the structure .

#include<stdio.h>

struct student
{
	int rno;
	char name[20];
	char course[20];
	float fees;
	
};
void pstudent (struct student s1 );
int main()
	{
		struct student s1;
		s1.rno=1;
		strcpy(s1.name,"Sonu");
		strcpy(s1.course,"Dot Net");
		s1.fees=20000.22f;
		pstudent (s1);
	}
	void pstudent (struct student s1 )
{
	printf("\n student rno=%d",s1.rno);
	printf("\n student name=%s",s1.name);
	printf("\n student course=%s",s1.course);
	printf("\n student fees=%f",s1.fees);
}

