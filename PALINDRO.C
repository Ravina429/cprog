// wap to check it is palindrome or not

#include<stdio.h>
void main()
{
int d1,num,n1,s;                                   //12321
clrscr();
printf("enter the n digit number");
scanf("%d",&num);
n1=num;
s=0;
while(num>0)
{
d1=num%10;  //1  2     3      2       1

s=s*10+d1;  //1   12    123    1232    12321

num=num/10; //1232  123    12      1
}
if(s==n1)
{
printf("the no.is palindrome");
}
else
{
printf("the no.is not palindrome");
}
getch();
}