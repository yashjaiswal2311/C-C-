									/*Unsigned short int (2byte)
									  limit is 0 to 65535*/									
#include <stdio.h>
void main()
{
	unsigned short c=0;
	unsigned short int d=65535;

	printf("c = %u",c);
	printf("d = %u",d);
}


//if we want to make any variable unsigned then we need to mention unsigned keyword other by default it will 
//take it as signed.
