#include<string.h>
main()
{
	char fname[15],lname[15],name[3];
	printf("\Enter first name");
	gets(fname);
	printf("\Enter last name");
	gets(lname);

	strcpy(name,fname);   // name=Ravina
	strcat(name," ");//space
	strcat(name,lname);  //name=Waghmare
	printf("\nYour full name is %s",name);
}
      //	printf("\nlength is %d",strlen(name));

