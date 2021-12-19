//to find the reverse number of any number

# include<stdio.h>
int main()
{

	int num,num1,rev=0,rem;
	printf("enter any number");
	scanf("%d",&num);
	for(num1=num;num1>0;)
	{
		rem=num1%10;
		rev=rev*10+rem;
		num1=num1/10;
	}
	printf("\n reverse of %d is %d",num, rev);
	}
	
	

