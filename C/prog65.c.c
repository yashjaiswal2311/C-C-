//Character Array (STRING)

#include <stdio.h>

void main()
{
	char arr[40];

	printf("Enter value:");				//when '%s' format specifier is used it does not need index column and '&' to assign value to array
	//scanf("%s",arr);					//'scanf' will only take the input before space input after space will not assign to arr 
	gets(arr);							//to print value even after space use 'gets' cause 'scanf' function only print the value before space 
	printf("Answer is:%s",arr);
}