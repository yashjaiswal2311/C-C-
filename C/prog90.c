//this is the program to print the sizeof structure and union variable. 

#include<stdio.h>
struct str
{
	char a;
	short b;
	float c;
};
union uni
{
	char a;
	short b;
	float c;
};
void main()
{
	struct str var;
	printf("size of var = %d\n",sizeof(var));
	union uni var1;
	printf("size of var = %d\n",sizeof(var1));
}