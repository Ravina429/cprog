//to find a number is prime or not
#include<stdio.h>

 int main()
{
	int num,i;
	printf("Enter a number");
	scanf("%d",&num);
	i=2;
	while(i<=num-1)
	{
		if(num%i==0)
		{
			printf(" Not a prime no");
			break;
		}
		i++;
	}
	if(i==num)
	printf("Prime number:");
}

