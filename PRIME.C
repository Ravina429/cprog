#include <stdio.h>
void main ()
{
int n,i,k=0;
printf("enter number");
scanf("%d",&n);
i=1;                              //   i    %n    k=0
while(i<=n)                       //   1   4      k=1
{                               //     2   4      k=1x
if(n%i==0)                       //    3   4      k=1 x
{                               //     4   4      k=2
k=k+1;                             //  5   4      k=1   x
}                                //    6   4      k=1     x
i++;
}
getch();
}