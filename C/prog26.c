#include <stdio.h>

int math(int x, int y)
{
	printf("%d x %d = %d",x,y,x*y);
	return 20;
}
void main()
{
	int i;
	i=math(5,9);
	printf("\nvalue of i = %d",i);
}

