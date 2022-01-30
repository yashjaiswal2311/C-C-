									//[Method Overriding]
#include <iostream>
using namespace std;

class parent
{
	public:
		void eat()
		{
			cout<<"Eat chapati"<<endl;
		}
};
class child:public parent
{
	public:
		void eat()
		{
			cout<<"Wanna Eat rice"<<endl;
		}
};
int main()
{
	child c;
	c.eat();					//calling
	return 0;
}

/* to override a method we need the create a method with same name in parent class and in child class
child class method will override the parent class method.
parent class mrthod will be called 'overridden method' and child class mrthod as 'overriding method'.

note:- if we do not override method eat() of child class to method eat() of parent class,
		 child class will use eat() method of class parent cause child can inherit the properties of parent
		 but when we override the method it will use method of child class.*/

