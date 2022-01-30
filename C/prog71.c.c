#include <stdio.h>

struct Test
{
	int x;
	char y;
};

void main()
{
	struct Test t;

	//printf("Enter the value of x:");
	//scanf("%d",&t.x);						//error if we writes x before y.

	printf("Enter the value of y:");
	scanf("%c",&t.y);

	printf("Enter the value of x:");
	scanf("%d",&t.x);

	printf("x=%d,y=%c",t.x,t.y);
}
