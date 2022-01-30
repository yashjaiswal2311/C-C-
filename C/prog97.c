														/*"strcmp()"
"it is a predefined function present inside the <string.h> header file, it is used to compare two strings, it's return type is integer.
/it returns 0 (if values are matched) and 1 or -1 (if values are not matched)*/
//'strcpy' in parameterized main(int argc, char* argv)

#include <stdio.h>
#include <dos.h>
#include <string.h>

int main(int argc, char* argv[])
{
	char* s1 = argv[1];
	char* s2 = argv[2];
	char* s3 = argv[3];

	int x = atoi(s2);
	int y = atoi(s3);

	if(!strcmp(s1,"ADD"))
	{
		printf("Inside Add\n");
		printf("RESULT = %d",x+y);
	}

	else if(!strcmp(s1,"SUB"))
	{
		printf("Inside Sub\n");
		printf("RESULT = %d",x-y);
	}
	else
	{
		printf("Invalid Operation");
	}
	return 0;
}

