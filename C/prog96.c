
										/*"strcmp()"
"it is a predefined function present inside the <string.h> header file, it is used to compare two strings, it's return type is integer.
/it returns 0 (if values are matched) and 1 or -1 (if values are not matched)*/

#include <stdio.h>
#include <string.h>

void main()
{
	char s1[] = "dbase";
	char s2[] = "education";
	char s3[] = "dbase";

	int x = strcmp(s1,s2);
	printf("%d\n",x);

	if(!x)
	{
		printf("Matched");
	}

	else
	{
		printf("Not Matched");
	}
}


