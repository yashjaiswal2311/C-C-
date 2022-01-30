//global array
#include <stdio.h>

int arr[7];
void main()
{
	int i;
	arr[3]=56;				//it will assign value to the third index of array
	for (i=0;i<7;i++)
	{
		printf("%d\n",arr[i]);
	}
}