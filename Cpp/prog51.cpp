									/*Signed short int (2byte)
									limit is 0 to 32767 for positive
									limit is -1 to -32768 for negative*/
									
#include <iostream>
using namespace std;
int main()
{
	short a=10;					//we can define short in 4 different ways
	short int b=20;
	signed short c=30;
	signed short int d=40;

	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	return 0;
}
