//create a structure array  of 5 elements of product structure

#include<stdio.h>
#include<string.h>
struct product
{
	int prodid;
	char prodname[20];
	float price;
	
 } ;
 int main()
 {
 struct product p1[5];
 int i ;
 for(i=0;i<5;i++)
 {
 	printf("\nenter the product id");
 	scanf("%d",&p1[i].prodid);
 	printf("\nenter the product name");
 	scanf("%s",&p1[i].prodname);
 	printf("\nenter the product price");
 	scanf("%f",&p1[i].price);
 	
 }
 printf("\n-------------------details of product are----------------------");
 for(i=0;i<5;i++)
 {
 	printf("\n product id =%d",p1[i].prodid);
 	printf("\n product name =%s",p1[i].prodname);
 	printf("\n product price =%f",p1[i].price);
 	printf("\n--------------------------------");
 }
}

