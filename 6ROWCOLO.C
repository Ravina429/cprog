#include <stdio.h>
void main ()                   //      A
{                              //      A B
int r,c;                        //     A B C
clrscr();                       //     A B C D
for(r='A';r<='D';r++)           //
{
for(c='A';c<=r;c++)
{
printf("%c",c);
}
printf("\n");
}
getch ();
}