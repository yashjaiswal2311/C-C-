
#include<stdio.h>

void m3()
{					
	printf("Printing m3\n");
}
void m2()
{
	m2();
	printf("Printing m2\n");
}
void m1()
{
	m3();
	printf("Printing m1\n");
}
void m4()
{
	m1();
	printf("printing m4");
}

void main()
{
	m4();				//function calling
}
						//we dont need to declare the funtion twice cause funtion are already pre written before main
