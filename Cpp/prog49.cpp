									//[FRIEND FUNCTION]

#include <iostream>
using namespace std;
class Test
{
	int a,b;
	friend void f1(Test);					//defining friend function to a class
	public:
		void setData()
		{
			cout<<"Enter a value of a:";
			cin>>a;
			cout<<"Enter a value of b:";
			cin>>b;
		}
};
void f1(Test t)					//if we are using private members of a class by friend function or class
{										//we will always pass the class object as a parameter
	cout<<"Value of a = "<<t.a<<endl;
	cout<<"Value of b = "<<t.b<<endl;
	cout<<"Sum = "<<t.a+t.b<<endl;
}
int main()
{
	Test t;
	t.setData();
	f1(t);
	return 0;
}

//[Note:-A function can be friend with more than one class but a class can only be friend with one class at a time]
