#include <stdio.h>

void main()
{
	int x,y,z;

	printf("Value of x:");
	scanf("%d",&x);
	
	printf("Value of y:");
	scanf("%d",&y);

	z=x*y;
	printf("Answer is:%d\n",z);

	if (z)
	{
		printf("Valid");//by default it will take any positive or negative number as true.
	}
	else
	{
		printf("Invalid");//and 0 as false
	}
}

