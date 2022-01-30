					//"PARAMETERIZED MAIN"

#include <stdio.h>
#include <dos.h>
int main(int argc, char *argv[])
{
	char* s0 = argv[0];
	char* s1 = argv[1];
	char* s2 = argv[2];
	char* s3 = argv[3];

	int x = atoi(s1);
	int y = atoi(s2);
	int z = atoi(s3);

	printf("x+y+z= %d\n",x+y+z);
	printf("%d\n",argc);
	printf("%s",s0);
	return 0;
}

/*'atoi' is a predefined function which is used to convert array into integer and it comes under <dos.h> header file,
/to run this code give value after compilation at runtime.
/if we are printing the 'argc' argument count it is showing the output 4 although we are giving only 3 values to it at runtime,
/it is doing so cause it is also taking 'app' as a argument it automatically takes 'app' in s0{] char* array, 
/to check it add in prog 95
	"char* s0 = argv[0]; before s1"
	and
	"printf("%s",s0); after agrc"*/