//to calculate male percentage and female percentage*/
 #include<stdio.h>
 int main()
 {
 	int m,f,total;
 	float mp,fp;
	 printf("\n enter the males and females");
	 scanf("%d%d",&m,&f);
	 total=m+f;
	 printf("total value of male and female %d",total);
	 mp=m*100/total;
	 fp=f*100/total;
	 printf("\n male percentage=%.2f%",mp);
	 printf("\n female percentage=%.2f%",fp); 
 }
