//create a structure array of 10 elements of student strucure

#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[20];
	char city[20];
	char state[20];
	
};
int main()
{
struct student s1[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("\nenter the student rno");
		scanf("%d",&s1[i].rno);
		printf("\nenter the student name");
		scanf("%s",&s1[i].name);
		printf("\nenter the student city");
		scanf("%s",&s1[i].city);
		printf("\nenter the student state");
		scanf("%s",&s1[i].state);
		
	}
	printf("--------------detail of students are---------------");
	for(i=0;i<10;i++)
	{
		printf("\nstudent rno=%d",s1[i].rno);
		printf("\nstudent name=%s",s1[i].name);
		printf("\nstudent city =%s",s1[i].city);
		printf("\nstudent state=%s",s1[i].state);
		printf("\n-----------------");
	}
}

