//example using structure to interchange data from one to another 

#include<stdio.h>
struct product
{
	int code;
	char name[20];
	float price;
	
};
int main()
{

struct product p1,p2,temp;

	printf("\n enter the code  name and price for first product");
	scanf("%d%s%f",&p1.code,&p1.name,&p1.price);
	
	printf("\n enter the code name price for the second product");
	scanf("%d%s%f",&p2.code,&p2.name,&p2.price);
	
	printf("\n before the interchange");
	
	printf("\nproduct code=%d name=%s price=%f",p1.code,p1.name,p1.price);
	
	printf("\nproduct code=%d name=%s price=%f",p2.code,p2.name,p2.price);
	
	temp=p1;
	p1=p2;
	p2=temp;
	
	printf("\n After the interchange");
	
	printf("\nproduct code=%d name=%s price=%f",p1.code,p1.name,p1.price);
	
	printf("\nproduct code=%d name=%s price=%f",p2.code,p2.name,p2.price);
	
	
}
