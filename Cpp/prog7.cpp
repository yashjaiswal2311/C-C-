#include <iostream>
using namespace std;

class Test
{
	public:
		static int a;					//declaration
};

int Test :: a;							//initialization

int main()
{
	Test t;
	Test :: a = 100;							//or	t.a=100;
	cout<<"Value of a = "<<Test::a<<endl;		
	return 0;
}

//'::' Scope Resolution Operator
//we can access static data members by object of class but it should be done by using class name.