//to find reverse value

#include<stdio.h>
int main()
{
	int num,num1,rem,rev=0;
	printf("enter any 4 digit numbers");
	scanf("%d",&num);
	num1=num;
	rem=num%10;
	rev=rev*10+rem;
	num=num/10;
	 
	 rem=num%10;
	 rev=rev*10+rem;
	 num=num/10;
	 
	 rem=num%10;
	 rev=rev*10+rem;
	 num=num/10;
	 
	 rem=num%10;
	 rev=rev*10+rem;
	 num=num/10;
	 
	 printf("\nreverse numbers is %d",rev);
	 
	 
	 
}
