//"pointer is a variable which stores the address of another variable"
//local array
//write the name of array with number of index in [] 

#include <stdio.h>
void main()
{
	int i;
	int arr[5];

	arr[3]=10;

	for (i=0;i<5;i++)
	{
		printf("%d\n",arr[i]);
	}
}