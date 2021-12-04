#include<stdio.h>
void main()
{
int n1,n2,n3,n4,n5,p,n,pcount,ncount;
clrscr();
printf("enter any number");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
if(n1>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
 }
if(n2>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
if(n3>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
if(n4>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
if(n5>0)
{
pcount=pcount+1;
}
else
{
ncount=ncount+1;
}
printf("positive number=%d",p);
printf("negative number=%d",n);
getch();
}