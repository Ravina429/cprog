#include <stdio.h>
void main ()
{
int num,s,d1,s1;
clrscr();
printf("enter any number");
scanf("%d",&num);
s1=num;
s=0;
while(num>0)
{
d1=num%10;     //5 //2 //1
s=s+(d1*d1*d1);

num=num/10;      //12  //1
}
printf("%d",s);
if(s1==s)
{
printf("the value is armstrong");
}
else
{
printf("the value is not armstrong");
}
getch();
}

