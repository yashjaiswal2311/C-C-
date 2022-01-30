//"pointer is a variable which stores the address of another variable"
//local array
//write the name of array with number of index in [] 

#include <stdio.h>
void main()
{
	char i;
	char arr[5]={'a','b','c','d','e'};					
	for (i=0;i<5;i++)
	{
		printf("%c\n",arr[i]);
	}
}