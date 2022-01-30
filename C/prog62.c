#include <stdio.h>

void main()
{
	int arr[3];
	int i;
	int j=0;
	for (i=0;i<3;i++)
	{
		printf("Enter value for Array:\n");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<3;i++)
	{
		j=j+arr[i];
	}
	printf("Sum of array:%d",j);
}