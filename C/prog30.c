//decrement
#include <stdio.h>
void main()
{
	int x,i;
	printf("Enter the value:");
	scanf("%d",&x);

	for (i=10;i>=1;i--)
	{
		printf("%d x %d = %d\n",x,i,x*i);
	}
}