									/*Unsigned short int (2byte)
									  limit is 0 to 65535*/									
//what if we assign a value rhich is more than or less than the limit.
#include <iostream>
using namespace std;
int main()
{
	unsigned short c=-2;
	unsigned short int d=65537;

	cout<<"c = "<<c<<endl;
	cout<<"d = "<<d<<endl;
	return 0;
}



/*o/p is [c= 65634,d= 1]

by value chart if we assign value value than the 65535 then it will run clock wise and if less than 0 then
anti-clock wise

if we want to make any variable unsigned then we need to mention unsigned keyword other by default it will 
take it as signed.*/
