#include <stdio.h>
void main ()
{
int arr[5]={1,2,3,4,5};
int num,i;
clrscr();
printf("enter the number");
scanf("%d",&num);
for (i=1;i<5;i++)
{
if(num==arr[i])
{
printf("number found at position %d\n",i+1);
}
else
{
printf("number not found\n");
}
}
getch();
}
