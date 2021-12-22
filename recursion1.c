#include <stdio.h>
int sum(int n);

int main()
 {
    int n, result;

    printf("Enter a positive integer: ");
    scanf("%d", &n);  //  4

    result = sum(n);    //  10

    printf("sum = %d", result);
    return 0;
}

int sum(int n) 
{
    if (n != 0)   
        
        return n + sum(n-1);    //  4+sum3  3+sum2   2+sum1   1+sum0
		    else
        return n;
}

