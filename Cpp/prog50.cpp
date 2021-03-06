									//[FRIEND FUNCTION]

#include <iostream>
using namespace std;
class Test1;
class Test
{
	int a,b;
	friend void f1(Test,Test1);					//defining friend function to a class
	public:
		void setData()
		{
			cout<<"Enter a value of a:";
			cin>>a;
			cout<<"Enter a value of b:";
			cin>>b;
		}
};
class Test1
{
	int c,d;
	friend void f1(Test,Test1);				//if we want to make f1() friend of both class them we need to declare 
	public:											//like this in both classes.
		void setData()
		{
			cout<<"Enter a value of c:";
			cin>>c;
			cout<<"Enter a value of d:";
			cin>>d;
		}
};
void f1(Test t,Test1 t1)					//if we are using private members of a class by friend function or class
{										//we will always pass the class object as a parameter
	cout<<"Value of a = "<<t.a<<endl;
	cout<<"Value of b = "<<t.b<<endl;
	cout<<"Value of c = "<<t1.c<<endl;
	cout<<"Value of d = "<<t1.d<<endl;
	cout<<"Sum = "<<t.a+t.b+t1.c+t1.d<<endl;
}
int main()
{
	Test t;
	Test1 t1;
	t.setData();
	t1.setData();
	f1(t,t1);
	return 0;
}

//[Note:-A function can be friend with more than one class but a class can only be friend with one class at a time]