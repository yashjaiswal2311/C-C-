#include<stdio.h>

void main()
{
	int x,y;
	printf("Enter the value of x:");
	scanf("%d",&x);

	printf("Enter the value of y:");
	scanf("%d",&y);

	if (x>y)
	{
		printf("True");
	}

	else 			// else does not contain ()....else() or parameters
	{
		printf("False");
	}
}