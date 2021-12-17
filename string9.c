#include<stdio.h>
int main()
{
	char name[10]="paapa";
	char name1[10]="papa";
	//if(name==name1)
	int res=strcmp(name,name1,3);
	if (res==0)
	{
		printf("\n first 3 character of both string match");
	
	}
	else
	{
		printf("\n first 3 character of both string doesn't match");
	}
}
