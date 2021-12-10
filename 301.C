#include <stdio.h>
void main ()
{
char h,sp,str,a='A';
clrscr();                   //
for(h='A';h<='C';h++)             //
{                              //
for(sp=0;sp<=100-h;sp++)        //
{
printf(" ");
}
for(str='A';str<=h;str++)
{
printf ("%c",h);
}
printf("\n");
}
getch();
}