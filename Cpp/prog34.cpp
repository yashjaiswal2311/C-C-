								//[EXCEPTION HANDLING]
#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"For a/b Enter value of a & b:"<<endl;
	cin>>a>>b;
	try
	{
		if(b==0)
		{
			throw 0;
		}
		cout<<"Exception a/b = "<<a/b<<endl;
	}
	catch (int x)
	{
		cout<<a/1<<endl;
		cout<<"Inside catch block";
	}
		return 0;
}
