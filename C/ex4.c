								//External Storage class Variable (Global Variable):
							
#include <stdio.h>
void main()
{
	extern int x;
	extern void test(int,int);	//declaration of function
	printf("x = %d\n",x);
	test(100,200);				//calling 'test'
}