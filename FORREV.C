#include <stdio.h>
void main ()
{
int num,d1,s;
clrscr();
printf("enter n digit number");
scanf("%d",&num);
for(s=0;num>0;)
{
d1=num%10;      //3  //2  //1

s=s*10+d1;    //3  //32  //321

num=num/10;       //12  //1
}
printf("%d",s);
getch();
}