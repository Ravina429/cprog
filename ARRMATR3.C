//create two diamentional array of 3 rows and 3col and initialize it

#include <stdio.h>
void main()
{
int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int row,col;
for(row=0;row<3;row++)
{
for (col=0;col<3;col++)
{
printf("%d\t",arr[row][col]);
}
printf("\n");
}
getch();
}
