#include <stdio.h>

void main()
{
	int x,y;

	printf("Value of x:");
	scanf("%d",&x);
	
	printf("Value of y:");
	scanf("%d",&y);

	if (x>y)
	{
		printf("YES");
	}
	else if (x<y)
	{
		printf("NO");
	}
	else if (x=y)
	{
		printf("Equal");
	}
	else
	{
		printf("Invalid");
	}
}

