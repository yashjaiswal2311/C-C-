
#include<stdio.h>
void m4();
void m3();
void m2();
void m1();

void main()
{
	m3();				//function calling
}

void m3()
{	
	m2();
	printf("Printing m3\n");
}
void m2()
{
	m1();
	printf("Printing m2\n");
}
void m1()
{
	m4();
	printf("Printing m1\n");
}
void m4()
{
	printf("printing m4\n");
}
