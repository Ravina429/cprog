#include<stdio.h>  
       enum days{mon=1,tues,wed,thurs,fri,sat,sun};
       
       	int main()
       	{
       		enum days d;
       		d=tues;
       		switch (d)
       		{
			   
			   case mon:
			   printf("\n today is monday");
			   break;
			   
			   case tues:
			   printf("\n today is tuesday");
			   break;
			   
			   case wed:
			   printf("\n today is wednesday");
			   break;
			   
			   case thurs:
			   printf("\n today is thursday");
			   break;
			   
			   case fri:
			   printf("\n today is friday");
			   break;
			   
			   case sat:
			   printf("\n today is saturday");
			   break;
			   
			   case sun:
			   printf("\n today is sunday");
			   break;		   
	   }
}
