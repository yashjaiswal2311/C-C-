//ARRAY in STRUCTURE
#include <stdio.h>

struct Array
{
	int x,y;
};

void main()
{
	struct Array a[5];
	int i;

	for (i=0;i<5;i++)
	{
		printf("Enter value of x:");
		scanf("%d",&a[i].x);

		printf("Enter value of y:");
		scanf("%d",&a[i].y);
	}

	for (i=0;i<5;i++)
	{
		printf("x=%d , y=%d\n",a[i].x,a[i].y);
	}
}