#include <stdio.h>
struct Test
{
	int x;
	char y;
};
void main()
{
	struct Test t;
	t.x=30;
	t.y='M';
	printf("x=%d,y=%c",t.x,t.y);
}
