//- create a structure product having members prodid,prodname, price
#include<stdio.h>
#include<string.h>
struct product
{
	int prodid;
	char proname[30];
	float price;
	
};
int main()
{
	struct product p1;
	p1.prodid=11;
	strcpy(p1.proname,"ponds powder");
	p1.price=120.22f;
	printf("\n product id %d",p1.prodid);
	printf("\n product name %s",p1.proname);
	printf("\n product price %f",p1.price);
	
	
}
