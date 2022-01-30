									/*Signed short int (2byte)
									  limit is 0 to 65535*/									
#include <stdio.h>
void main()
{
	short a=-32770;					//we can define short in 4 different ways
	short int b=32769;

	printf("a = %d",a);
	printf("b = %d",b);
}


/*o/p is [a= +32766,d= -32767]

if we don't write signed by default it is signed. 

by value chart if we assign value value than the 65535 then it will run clock wise and if less than 0 then
anti-clock wise

if we want to make any variable unsigned then we need to mention unsigned keyword other by default it will 
take it as signed.*/
  
