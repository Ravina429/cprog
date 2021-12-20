//structure book

#include<stdio.h>
#include<string.h>
struct book
{
	int bookid;
	char title[10];
	float price;
	
}b1;
int main()
{
b1.bookid=123;
strcpy(b1.title,"bappa morya");
b1.price=500.22f;
printf("\n book id %d",b1.bookid);
printf("\n book title %s",b1.title);
printf("\n book price %f",b1.price);
}


