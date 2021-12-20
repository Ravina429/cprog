//create a structure array of 3 elements of book structure

#include<stdio.h>
#include<string.h>
struct book
{
	int bookid;
	char title[20];
	
};
int main()
{
struct book b1[3];
int i;
for(i=0;i<3;i++)
{
	printf("\nenter book id");
	scanf("%d",&b1[i].bookid);
	printf("\nenter book title");
	scanf("%s",&b1[i].title);
}
	printf("\n ----------book details of 3 books  are ---------");
	for(i=0;i<3;i++)
	{
	printf("\nbook id =%d",b1[i].bookid);
	printf("\nbook title =%s",b1[i].title);
	printf("\n--------------");
	}
	

	
}



