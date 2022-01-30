#include <stdio.h>
void main()
{
	int x,y;
	printf("Enter value of x:");
	scanf("%d",&x);
	printf("Enter value of y:");
	scanf("%d",&y);

	if (x>y)
	{
		printf("%d",x);
	}
	else if (x<y)
	{
		printf("%d",y);
	}
	else
	{
		printf("null");
	}
}