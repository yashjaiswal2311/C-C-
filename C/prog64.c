//Character Array (STRING)

#include <stdio.h>

void main()
{
	char arr[6]={'H','E','L','L','O'};
	int i;

	printf("%s",arr);						//'%s' is a format specifier which does not need a for loop or a index number, it will print the array only as a string
}											//if we want output in the form of character then use '%c' format specifier
											//'arr' is a internal pointer