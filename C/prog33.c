#include <stdio.h>

int type3()
{
	int a,b;
	printf("Enter value of a & b:");
	scanf("%d %d",&a,&b);
	return (a*b);
}
void type2(int x,int y)
{
	int z;
	z=x/y;
	printf("value of z:%d",z);
}

void main()
{
	int c,d,e;
	c=type3();
	printf("value of c: %d\n",c);
	printf("Enter value of d & e:");
	scanf("%d %d",&d,&e);
	type2(d,e);
}