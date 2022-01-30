#include <stdio.h>
void main()
{
	int x=5;
	int y=11;
	int z=10;
										//by default it will take as false and any positive or negative number as true. 
		
	if (x+y>z)
	{
		printf("A");
	}
	else if (x-y>z)
	{
		printf("B");
	}
	else if (x/y>z)
	{
		printf("C");
	}
	else if (x*y>z)
	{
		printf("D");
	}
	else
	{
		printf("null");
	}
}