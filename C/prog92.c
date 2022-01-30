/*(ENUM)
"Enum is used to represent the group of constants as a single entity."
 DRAWBACK:- it is not strictly typechecked in 'c'*/

#include<stdio.h>
enum Month {JAN=1,FEB,MAR,APR,MAY,JUNE,JULY,AUG,SEP,OCT,NOV,DEC};

int main()
{
	enum Month thisMonth;
	thisMonth = OCT;
	printf("Month=%d",thisMonth);
	return 0;
}