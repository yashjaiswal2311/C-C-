#include <stdio.h>

void type2(int x,int y)
{
	int z;
	z=x*y;
	printf("Answer is: %d",z);
}
void main()
{
	int a,b;
	printf("Enter value of a & b:");
	scanf("%d %d",&a,&b);
	type2(a,b);
}