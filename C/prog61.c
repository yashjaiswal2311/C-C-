#include <stdio.h>

void main()
{
	int arr[4];
	int i;
	int j=1;
	for (i=0;i<4;i++)
	{
		printf("Enter value for Array:");
		scanf("%d",&arr[i]);
	}
	for (i=0;i<4;i++)
	{
		j=arr[i]/j;
	}
	printf("Answer is:%d",j);
}