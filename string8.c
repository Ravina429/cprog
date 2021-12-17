#include<stdio.h>
int main()
{
	char name[10]="mumma";
	char name1[10]="mummy";
	//if(name==name1)
	int res=strcmp(name,name1);
	if (res==0)
	{
		printf("string are equal");
	
	}
	else
	{
		printf("string are not equal");
	}
}
