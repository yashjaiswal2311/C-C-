									//[Anonymous Class]
#include <iostream>
using namespace std;
class
{
	public:
		int a;
		int b;
}obj;
int main()
{
	obj.a=100;
	cout<<" a = "<<obj.a<<endl;
	cout<<"Anonymous Class";
	return 0;
}

//if we declare anonymous structure or class as static then we will not the warning message.
//these classes can't have a constructor but have a destructor.
//these classes can neither be passed as arguments to functions nor can be used as return values from functions.
