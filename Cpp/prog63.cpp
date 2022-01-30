										//[Method Overloading]
#include <iostream>
using namespace std;
class Parent
{
	public:
		void m1()
		{
			cout<<"parent class m1 method"<<endl;
		}
		void m1(int x)
		{
			cout<<"child class 1 argument m1 method"<<endl;
		}
};
class Child:public Parent
{
};

int main()
{
	Child c;
	c.m1();
	c.m1(20);
	return 0;
}