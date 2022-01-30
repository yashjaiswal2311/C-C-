												//STATIC STORAGE CLASSES:
//Static variable declared inside the function:

#include <stdio.h>

int m1();
int main()
{
	printf("x = %d \n",m1());
	printf("x = %d \n",m1());
	printf("x = %d \n",m1());
	printf("x = %d \n",m1());
}

int m1()
{
	static int x;
	x = x+1;
	return x;
}


//static variable can preserve the value, so everytime m1() is called it's value increased by 1