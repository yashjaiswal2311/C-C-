#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"for a/b Enter value of a & b:"<<endl;
	cin>>a>>b;

	try
	{
		if(b==0)
		{
			throw 'A';
		}
		if(b==1)
		{
			throw 3;
		}
		if(b==2)
		{
			throw 3.4;
		}
		cout<<"a/b = "<<a/b<<endl;
	}
	catch(char x)
	{
		cout<<"Inside catch block char"<<endl;
	}
	catch(int x)
	{
		cout<<"Inside catch block int"<<endl;
	}
	catch(...)				//it's a special catch block called "catch all catch(...)"
	{
		cout<<"Inside catch block ..."<<endl;
	}
	return 0;
}


/*[Note:- if you want your exception to go in different catch block then throw different type of value for
different block otherwise if values are same then same block will execute for all of them.]

[catch(...):- 'catch all catch(...)' is used to catch all type of exception]

[...(Ellipsis):- this is used for the rest of the remaining condition like else block]*/
