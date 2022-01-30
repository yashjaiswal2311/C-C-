//STRUCTURE

#include <stdio.h>
#include <string.h>

struct Hope
{
	int x;
	char y;
	char arr[40];
};

void main()
{
	struct Hope h;
	h.x=47;
	h.y='A';
	strcpy(h.arr,"'Hello World'");					//'strcpy' function will assign the value from soucre and assign it to destination with its pointer to destination 
												    //'strcpy' is a function of <string.h> header file									
	printf("x=%d, y=%c, arr=%s",h.x,h.y,h.arr);
}