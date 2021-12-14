//create 2 dimension array of 3 rows and 2col to accept rno nd marks from the user.


#include <stdio.h>
void main()
{
int arr[3][2];
int row,col;
clrscr();
for(row=0;row<3;row++)
{
for (col=0;col<2;col++)
{
printf("enter rno and marks ");
scanf("%d",&arr[row][col]);
}
for(row=0;row<3;row++)
{
for(col=0;col<2;col++)
{
printf("the rno and marks of the student are=%d",arr[row][col]);
printf("\n");
}
getch();
}

