//create a func result with 3 integer parameter to accept 3 sub marks ,
//calcu and display total, % and grade.

#include <stdio.h>
void result(int sub1,int sub2,int sub3)
{
int total;
float per;
total=sub1+sub2+sub3;
printf("\ntotal marks=%d",total);
per=(float)(total/300.0f)*100.0f;
printf("\npercentage=%2f",per);
if(per>=75)
{
printf("\n grade:distinction");
}
else if (per>=60&&per<75)
{
printf("\n grade:first");
}
else
{
printf("\n grade:fail");
}
}
void main()
{
int marks1,marks2,marks3;
printf("enter 3 sub marks ");
scanf("%d%d%d",&marks1,&marks2,&marks3);
result(marks1,marks2,marks3);
getch();
}


