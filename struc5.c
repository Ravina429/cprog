//- repeat the above program accepting values from the user

#include<stdio.h>
#include<string.h>
struct product
{
	int prodid;
	char prodname[30];
	float price;
	
};
int main()
{
	struct product p1;
	printf("\n enter the product id");
	scanf("%d",&p1.prodid);
	printf("\n enter the product name");
	scanf("%s",&p1.prodname);
	printf("\n enter the product price");
	scanf("%f",&p1.price);
	printf("\n product id %d",p1.prodid);
	printf("\n product name %s",p1.prodname);
	printf("\n product price %f",p1.price);
}
