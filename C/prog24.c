#include <stdio.h>

int math()
{
	return 4;
}
int math1()
{
	return 5;
}
void main()
{
	int i,j;
	i=math();
	j=math1();
	printf("%d x %d = %d",i,j,i*j);
}

