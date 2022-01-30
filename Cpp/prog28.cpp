								//[MODE OF INHERITANCE]
								//Private:
#include <iostream>
using namespace std;
class Base
{
	private:
		int a;
	public:
		int b;
	protected:
		int c;
};
//all member(private & protected)of class base has now become private so it can not be accessed \
//after class Derived

class Derived : private Base
{
	public:
		void set()
	{
		//cout<<"Enter value of a:";			cause private data can never be inherited
		//cin>>a;
		cout<<"Enter value of b:";
		cin>>b;
		cout<<"Enter value of c:";
		cin>>c;
	}
	void show()
	{
		//cout<<"Value of a = "<<a<<endl;
		cout<<"Value of b = "<<b<<endl;
		cout<<"Value of c = "<<c<<endl;
	}
};

/*now this class cannot inherit anything from class Derived cause in base class is mode of inhritance is private 
so all data of class base(public & protected data) has become private of class derived and now private data can 
never be inherited.*/

class Derived1 : private Derived
{
	public:
		void set()
		{
			//cout<<"Enter value of a:";
			//cin>>a;
			cout<<"Enter value of b:";
			cin>>b;
			cout<<"Enter value of c:";
			cin>>c;
		}
		void show()
		{
		//cout<<"Value of a = "<<a<<endl;				cause private data can never be inherited
		cout<<"Value of b = "<<b<<endl;
		cout<<"Value of c = "<<c<<endl;
		}
};
int main()
{
	Derived d;
	Derived1 d1;

	d.set();
	d.show();
	d1.set();
	d1.show();
	return 0;
}