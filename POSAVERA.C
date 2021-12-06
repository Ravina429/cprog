//wap that read 5 numbers and count the number of posi number and print the
// average of all positives value


#include <stdio.h>
void main ()
{
int n1,n2,n3,n4,n5,pcount=0,ncount=0,ave,add=0;
clrscr();                                        //2,-3,4,-1,5
printf("enter the 5 numbers");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
if(n1>0)
{
pcount=pcount+1;     //1
add=add+n1;        //2
}
else
{
ncount=ncount+1;
}
if(n2>0)
{
pcount=pcount+1;      //
add=add+n2;
}
else
{
ncount=ncount+1;         //1
}
if(n3>0)
{
pcount=pcount+1;         //2
add=add+n3;                 //6
}
else
{
ncount=ncount+1;
}
if(n4>0)
{
pcount=pcount+1;
add=add+n4;
}
else
{
ncount=ncount+1;          //2
}
if(n5>0)
{
pcount=pcount+1;            //3
add=add+n5;                    //11
}
else
{
ncount=ncount+1;
}
ave=add/pcount;
printf("average of number is=%d",ave);
getch();
}


