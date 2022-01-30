								//[Function with variable arguments]

#include <iostream>
#include <stdarg.h>
using namespace std;
void f1(int x,  ...)
{
	va_list arguments;				//creating list
	int sum = 0;

//initializing arguments to store all values after x
	
	va_start (arguments, x);		//start the execution of list
	for (int count=0;count<=x;count++)
	{
		sum = sum+va_arg(arguments,int);
	}
	va_end(arguments);				//end the execution of list
	cout<<"Sum = "<<sum;
}
int main()
{
	f1(7,10,15,20,30,40,50,60,70);
	return 0;
}

/*it is assign first value 7 into x and thatswhy for loop is running from 0 to 7 if we increase the value of x 
for loop will run that much time.

[it is used to give multiple values to single parameter]

['va_list':- variable list is a predefined datatype present inside <stdarg> header file used to create variable of
			 list type]
['va_start':- variable start is used to start the list which is created.]
['va_arg':- to bring all other values from the list.]
['va_end':- variable end is used to end the list in the last of function(method),where list is created cause scope
and visibility of the function is always within the blocks]
['...':- Ellipsis]
[Note:- An array can store data of it's type only whereas a list can store all type of data]