#include <stdio.h>

void main()
{
	int arr[3]={5,6,7};
	int *b;
	b = &arr[1];

	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);
	printf("%d\n",&arr[1]);
	printf("%d\n",b);
}