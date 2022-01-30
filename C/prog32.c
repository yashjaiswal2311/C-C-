#include <stdio.h>

int type3()
{
	int a,b;
	printf("Enter value of a & b:");
	scanf("%d %d",&a,&b);
	return (a*b);
}
void main()
{
	int c;
	c=type3();
	printf("value of c: %d",c);
}