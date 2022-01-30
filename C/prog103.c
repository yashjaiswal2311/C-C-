												//STATIC STORAGE CLASSES:
//Static variable declared outside the function:

#include <stdio.h>

int m1();
int m2();
static int x;

int main()
{
	printf("x = %d \n",m1());
	printf("x = %d \n",m2());
	printf("x = %d \n",m1());
	printf("x = %d \n",m2());
}

int m1()
{
	x = x+1;
	return x;
}

int m2()
{
	x = x+1;
	return x;
}


//static variable can preserve the value, so everytime m1() is called it's value increased by 1