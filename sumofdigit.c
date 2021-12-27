#include<stdio.h>
int addofdigit(int num);

	void main()
	{
	int add,num;
	printf("\nenter the n digit");
	scanf("%d",&num);
	add=addofdigit(num); 
	printf("\n add of digit =%d  number is =%d",num,add);
		
}
int addofdigit(num)
{
	static int s,a;
	s=s+(num%10);  //        
	a=num/10;     //1234        
	if(a>0)
	{
		addofdigit(a);
		
	}
	return s;
}
