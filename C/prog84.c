//'typedef' is a keyword used to assign new name or synonyms to a type.

#include <stdio.h>
void main()
{
	int x;
	typedef int y;			//now 'y' working as a new name of int we can write y in the place of int and it will have the same properties
	y a;
	a=20;
	printf("a=%d",a);
}
