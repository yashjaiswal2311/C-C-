//ARRAY of STRUCTURE
#include <stdio.h>

struct Array
{
	int x,y;
};

void main()
{
	struct Array a[5];

	a[0].x=10;
	a[0].y=20;

	a[1].x=30;
	a[1].y=40;

	a[2].x=50;
	a[2].y=60;

	a[3].x=70;
	a[3].y=80;

	a[4].x=90;
	a[4].y=100;

	printf("x=%d , y=%d\n",a[0].x,a[0].y);
	printf("x=%d , y=%d\n",a[1].x,a[1].y);
	printf("x=%d , y=%d\n",a[2].x,a[2].y);
	printf("x=%d , y=%d\n",a[3].x,a[3].y);
	printf("x=%d , y=%d\n",a[4].x,a[4].y);

	//or we can also print values by using 'for' loop
}