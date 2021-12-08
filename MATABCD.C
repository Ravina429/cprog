#include <stdio.h>
void main ()                   //      A
{                              //      A B
int r,c,n=1 ;                        //     A B C
clrscr();                       //     A B C D
for(r='A';r<='D';r++)           //
{
for(c='A';c<=r;c++)
{
printf("%c",n++);
}
printf("\n");
}
getch ();
}