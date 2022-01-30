//Character Array (STRING)

#include <stdio.h>
#include <string.h>

void main()
{
	char arr[]={'H','E','L','L','O'};
	int i;

	for (i=0;i<=strlen(arr);i++)					//'strlen' can only be used with the hearder file <string.h>
	{
		printf("%c\n",arr[i]);
	}
}