#include <stdio.h>

void main()
{
	int arr[3];
	int i;
	int j=1;
	for (i=0;i<3;i++)
	{
		printf("Enter value for Array:\n");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<3;i++)
	{
		j=j*arr[i];
	}
	printf("Multipiication of array:%d",j);
}