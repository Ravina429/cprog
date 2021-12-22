//factorial of natural no.using recursion

#include <stdio.h>
int fact(int n);

int main()
 {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);  //3

    result = fact(n);    //6

    printf("factorial = %d", result);
    
}

int fact(int n) 
{
  if(n==1)
  return 1;
  else{
  	return n*fact(n-1);//  3*fact2   2*fact1   1
	  return fact;   
  }
	
		    
}

