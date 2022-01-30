#include <stdio.h>

struct test
{
	int x,y;
};

void main()
{	
	struct test t[5];
	
	int i;
	int arrlen;
	arrlen= sizeof(t)/sizeof t[0];
	printf("arrlen=%d",arrlen);
}


//instead of int we should use 'size_t' cause int also stores negative values and a array or a storage can't br negative. 
//'size_t'is a datatype which is specially used to find size.
