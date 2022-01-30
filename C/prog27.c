#include <stdio.h>

int math(int x, int y)
{
	return (x+y)*x;
}
void main()
{
	int i;
	i=math(5,9);
	printf("\nvalue of i = %d",i);
}

