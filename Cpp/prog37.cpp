#include <iostream>
using namespace std;
int main()
{
	cout<<"Before try\n";
	try
	{ 
		throw 10;
	}
	catch (char *excp)
	{
		cout<<"Caught\n"<<excp;
	}
	catch(...)
	{
		cout<<"Default Exception\n";
	}
	return 0;
}
