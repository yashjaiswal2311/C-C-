//creating and calling of function also called as methods in java.

#include <stdio.h>

void add();				//function declaration
						//if we define function after main then we have to declare it before main()
void main()
{
	add();				//function calling
}
 void add()
	{
		printf("functions after main");		//function defination
	}