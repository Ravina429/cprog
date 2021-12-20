//3- create a structure student having members rno,name,city,state

#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[30];
	char city[10];
	char state[20];
};
int main()
{
struct  student s1;
s1.rno=01;
strcpy(s1.name,"shiwani waghaye");
strcpy(s1.city,"Nagpur");
strcpy(s1.state,"Maharashtra");
printf("\n student rno =%d",s1.rno);
printf("\n student name =%s",s1.name);
printf("\n student city =%s",s1.city);
printf("\n stduent state =%s",s1.state);
}
