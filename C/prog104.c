									/*Signed short int (2byte)
									  limit is 0 to 65535*/									
#include <stdio.h>
void main()
{
	short a=0;					//we can define short in 4 different ways
	short int b=32767;
	signed short c=-1;
	signed short int d=-32768;

	printf("a = %d",a);
	printf("b = %d",b);
	printf("c = %d",c);
	printf("d = %d",d);
}


//if we want to make any variable unsigned then we need to mention unsigned keyword other by default it will 
//take it as signed.
