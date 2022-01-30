#include <stdio.h>

int m1(int x)
{
	printf("Value of x:%d\n",x);
	return x*x;
}
void main()
{
	int y;
	y=m1(40);
	printf("Value of y:%d",y);
}