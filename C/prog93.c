					//"PARAMETERIZED MAIN"

#include <stdio.h>
#include <dos.h>
int main(int argc, char *argv[])
{
	char* s1 = argv[1];
	char* s2 = argv[2];
	char* s3 = argv[3];

	int x = atoi(s1);
	int y = atoi(s2);
	int z = atoi(s3);

	printf("x+y+z= %d",x+y+z);
	return 0;
}

/*'atoi' is a predefined function which is used to convert array into integer and it comes under <dos.h> header file,
to run this code give value after compilation at runtime.*/