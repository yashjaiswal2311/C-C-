								//[MODE OF INHERITANCE]
								//Public:
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
class Derived : public Base
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
class Derived1 : protected Derived
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