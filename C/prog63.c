//Character Array (STRING)

#include <stdio.h>

void main()
{
	char arr[6]={'H','E','L','L','O'};
	//char arr[5]={'H','E','L','L','O'};
	//char arr[]={'H','E','L','L','O','\n'};			//if we want our array to not to print garbage value then give it a extra space like if number of inputs 5 then arr[6]
													//or givr a '\n' input in the values by yourself
	int i;
	
	for (i=0;i<6;i++)
	{
		printf("%c",arr[i]);
	}
}
