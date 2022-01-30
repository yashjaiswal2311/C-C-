#include <iostream>
using namespace std;
int main()
{
	cout<<"Before try\n";
	try
	{ 
		throw 'A';
	}
	catch (int x)
	{
		cout<<"Caught\n"<<x;
	}
	catch(...)
	{
		cout<<"Default Exception\n";
	}
	return 0;
}

//it is going inside catch all catch(...) block cause there is no catch block for char so it will run in it.
