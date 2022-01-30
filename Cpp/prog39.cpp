#include <iostream>
using namespace std;
int main()
{
	cout<<"Before try\n";
	try
	{ 
		throw 'a';
	}
	catch (int x)
	{
		cout<<"Caught\n"<<x;
	}
	return 0;
}

//because there is no catch block of char as well as no catch all catch(...) block thus the code will show error.