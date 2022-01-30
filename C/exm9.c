#include <stdio.h>
#include <dos.h>
#include <string.h>

int main(int argc, char* argv[])
{
	extern int add(int,int);
	extern int sub(int,int);
	extern int pro(int,int);
	extern int div(int,int);

	char* s1 = argv[1];
	char* s2 = argv[2];
	char* s3 = argv[3];

	int x = atoi(s2);
	int y = atoi(s3);
	int result;

	if(!strcmp(s1,"ADD"))
	{
		result = add(x,y);
		printf("ADDITION = %d\n",result);
	}

	else if(!strcmp(s1,"SUB"))
	{
		result = sub(x,y);
		printf("SUBTRACTION = %d\n",result);
	}

	else if(!strcmp(s1,"PRO"))
	{
		result = pro(x,y);
		printf("PRODUCT = %d\n",result);
	}

	else if(!strcmp(s1,"DIV"))
	{
		result = div(x,y);
		printf("DIVISION = %d\n",result);
	}
	else
	{
		printf("INVALID INPUT");
	}
	return 0;
}