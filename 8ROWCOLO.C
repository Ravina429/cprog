#include<stdio.h>
void main()
{                                 //       1 2 3 4 5
 int r,c;                          //      a a a a a
 char a='a';                     //        1 2 3 4 5
 clrscr();                        //       a a a a a
 for(r=1;r<5;r++)
 {
 for(c=1;c<=5;c++)
 {
 if(r%2==0)
 {
 printf("a");
 }
 else
 printf("%d",c);
 }
 printf("\n");
 }
 getch();
 }
