
#include "iostream"
using namespace std;

void add(int a=0,int b=0,int c=0);
int main()
{
	add();
	return 0;
}
void add(int a,int b,int c)
{
	int sum = a+b+c;
	cout<<"Sum = "<<sum<<endl;
}

/*[Note:- we must set the default values from right to left.]
like (int a,int b,int c=0);		if we want only one value to be default;
	 (int a,int b=0,int c=0);		 two values;
	 (int a=0,int b=0,int c=0);		 all values;
	 [left<<--------------right]
default values does not mean that we can't give value to variables for example if we call add functio like
add(10);	this will assign value to a and b and c will use default value
							or
add(10,40);	in this value will assign to a and b and c will use default value.
add(10,40,50);	 in this all values will be assigned to all varuable cause values implicitly assigned 
	  [left---------->>right]*/