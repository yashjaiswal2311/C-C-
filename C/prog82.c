#include <stdio.h>

struct test
{
	int x,y;
};

void main()
{	
	struct test t[5];
	
	int i;
	size_t arrlen;
	arrlen= sizeof(t)/sizeof t[0];
	printf("arrlen=%d\n",arrlen);

	for (i=0;i<arrlen;i++)
	{
		printf("Enter value of x:");
		scanf("%d",&t[i].x);
		printf("Enter value of y:");
		scanf("%d",&t[i].y);
	}
	for (i=0;i<arrlen;i++)
	{
		printf("x=%d,y=%d\n",t[i].x,t[i].y);
	}
}


//instead of int we should use 'size_t' cause int also stores negative values and a array or a storage can't br negative. 
//'size_t'is a datatype which is specially used to find size.
