#include<stdio.h>
enum weekdays{sunday=1,monday,tuesday,wednesday,thursday,friday,saturday};
int main()
{
	enum weekdays w;
	w=friday;
	printf("\nthe value of w is =%d",w);
}
