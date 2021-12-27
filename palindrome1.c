#include<stdio.h>
int palin(int);

	int n;
	
	void main()
	{
		int palindrome;
	
	printf("\nenter the any number");
	scanf("%d",&n);
	palindrome=palin(n);
	
	if(palindrome==0)
	
		printf("\n %d  palindrome\n",n);
	
	else
	
		printf("\n %d  not palindrome\n",n);
		
	}
		
int palin(int n)
{
	  static sum=0;
	  if(n!=0)
	  {
	  	sum=sum*10+(n%10);
	  	palin(n/10);
	  }
	  if(sum==0)
	  return 1;
	  
	  else
	  return 0;
	  	
	  }
	 
	
	

