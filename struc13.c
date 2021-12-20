 //create a structure array of 5 elements of employee structure
  #include<stdio.h>
  #include<string.h>
  struct employee
  {
  	int empid;
	  char name[20];
	  float salary;
	   
  };
  int main()
  {
  	struct employee e1[5];
  		int i;
  		for(i=0;i<5;i++)
  		{
  			printf("\nenter the employee id");
  			scanf("%d",&e1[i].empid);
  			printf("\nenter the employee name");
  			scanf("%s",&e1[i].name);
  			printf("\nenter the employee salary");
  			scanf("%f",&e1[i].salary);
			   }
			   printf("---------details of employees are---------");
			   for(i=0;i<5;i++)
			   {
			   	printf("\n employee id=%d",e1[i].empid);
			   	printf("\n employee name=%s",e1[i].name);
			   	printf("\n employee salary=%f",e1[i].salary);
			   	printf("\n--------------");
			   }
	  }
  
