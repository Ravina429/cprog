//wacp to read a password until it is correct. for wrong password print incorrect password
//and for correct password print correct password and quick the program.
//the correct password is 1234

#include<stdio.h>
void main()
{
int pass,cp=1234;
clrscr();
printf("enter the correct password");
scanf("%d",&pass);
if(pass==cp)
{
printf("it is correct password");
}
else
{
printf("it is incrrect password");
}
getch();
}


