#include<stdio.h>
int main()
{
	int num;
	num=1;
	if(num==1)
	goto label1;
	
	else if(num==2)
	goto label2;
	
	else 
	goto label3;
	
	label1:
		printf("\n the number is one");
		goto label3;
		
		label2:
		printf("\n the number is two");
		goto label3;
		
		label3:
			printf("\n bye");
}
