//"pointer is a variable which stores the address of another variable"

#include <stdio.h>
void main()
{
	int x;
	int *y;
	  x=20;
	  y=&x;

	printf("%d\n",x);
	printf("%d\n",y);			//printing address of x in *i, it is a pointer
	printf("%d\n",&x);			//printing address of x
								
}
