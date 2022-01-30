									/*Unsigned short int (2byte)
									  limit is 0 to 65535*/									
#include <stdio.h>
void main()
{
	unsigned short c=-2;
	unsigned short int d=65537;

	printf("c = %u",c);
	printf("d = %u",d);
}


/*o/p is [c= 65634,d= 1]

by value chart if we assign value value than the 65535 then it will run clock wise and if less than 0 then
anti-clock wise

if we want to make any variable unsigned then we need to mention unsigned keyword other by default it will 
take it as signed.*/