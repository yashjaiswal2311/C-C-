#include <stdio.h>

int math(int x, int y)
{
	printf("%d,%d,",x,y);
	return 20;
}
void main()
{
	int i;
	i=math(40,50);
	printf("%d",i);
}

