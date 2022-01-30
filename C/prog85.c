//'typedef' is a keyword used to assign new name or synonyms to a type.

#include <stdio.h>
void main()
{
	int i;
	typedef int Arr[5];		//now Arr is working as a integer[](integer array) of length 5.
	Arr a,b,c;
	a[0]=10;
	a[1]=20;
	a[2]=30;
	a[3]=40;
	a[4]=50;

	for (i=0;i<5;i++)
	{
		printf("a[%d]=%d\n",i,a[i]);
	}
}
