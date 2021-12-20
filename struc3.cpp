//example of structure book accepting values from the user

#include<stdio.h>
#include<string.h>
struct book
{
	int bookid;
	char title[20];
	float price;
	
};
int main()
{
	struct book b1;
	printf("\n enter book id ");
	scanf("%d",&b1.bookid);
	printf("\n enter title");
	scanf("%s",&b1.title);
	printf("\n enter price");
	scanf("%f",&b1.price);
	printf("\n----------------book detail are------------------");
	printf("\n book id %d",b1.bookid);
	printf("\n book title %s",b1.title);
	printf("\n book price %f",b1.price);
}
	

