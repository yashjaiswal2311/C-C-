#include <stdio.h>

void main()
{
	int x,y,z;

	printf("Value of x:");
	scanf("%d",&x);
	
	printf("Value of y:");
	scanf("%d",&y);

	z=x+y;
	printf("Sum of x,y is:%d\n",z);

	if (z>x)
	{
		printf("Invalid");
	}
	else if (z>y)
	{
		printf("NO");
	}
	else if (z=x)
	{
		printf("Equal");
	}
	else if (z=y)
	{
		printf("Equal");
	}
	else
	{
		printf("No Result");
	}
}

