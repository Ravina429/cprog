//4- repeat the above program accepting values from the user for students

#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[30];
	char city[20];
	char state[30];
};
int main()
{
struct  student s1;
printf("\n enter the student rno");
scanf("%d",&s1.rno);
printf("\n enter the student name");
scanf("%s",&s1.name);
printf("\n enter the student city");
scanf("%s",&s1.city);
printf("\n enter the student state");
scanf("%s",&s1.state);
printf("\n student rno =%d",s1.rno);
printf("\n student name =%s",s1.name);
printf("\n student city =%s",s1.city);
printf("\n stduent state =%s",s1.state);
}
