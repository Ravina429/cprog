#include<string.h>
struct book
{
	int bookid;
	char title[50];
	float price;
	
};
int main()
{
struct book b1,b2;
b1.bookid=123;
strcpy(b1.title,"Diamond Group Of Oxford");
b1.price=500.22f;
printf("\n book id =%d",b1.bookid);
printf("\n book title =%s",b1.title);
printf("\n book price =%f",b1.price);

b2.bookid=213;
strcpy(b2.title,"Mission Smile");
b2.price=650.22f;
printf("\n book id =%d",b2.bookid);
printf("\n book title =%s",b2.title);
printf("\n book price =%f",b2.price);
}

