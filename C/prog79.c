#include <stdio.h>

struct test
{
	int x,y;
};

void main()
{
	int i;
	struct test t[5];

	printf("%d\n",sizeof(t));

	//printf("%d\n",sizeof(int));

	//printf("%d\n",sizeof(i));

	//printf("%d\n",sizeof(2));

	//printf("%d\n",sizeof(2.1));

	//printf("%d\n",sizeof(t[0]));
}


//'sizeof' is a predefined function which is used to find the size of variables and array.
//by using this we can find the size of any of those.
