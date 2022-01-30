						//[Multiple Inheritance with virtual class]
#include <iostream>
using namespace std;
class A
{
	public:
		void m1()
		{
			cout<<"class A, m1 method"<<endl;
		}
};
class B:virtual public A
{
	public:
		void m2()
		{
			cout<<"class B, m2 method"<<endl;
		}
};
class C:virtual public A
{
	public:
		void m3()
		{
			cout<<"class C, m3 method"<<endl;
		}
};
class D:public B,public C							//Multiple inheritance
{
	public:
		void m4()
		{
			cout<<"class D, m4 method"<<endl;
		}
};
int main()
{
	A a;
	B b;
	C c;
	D d;
	a.m1();
	b.m2();
	c.m3();
	d.m4();
	d.m1();
	return 0;
}

/* if we do not write virtual keyword then It will show Error because compiler will not be able to decide that which way m1() method of 
class A is coming towards class D because D is the child of B & C and B & C both are the child of A so m1() can 
come take any path so we use virtual keyword so what it will do it will implicitly choose one path and make
m1() accessible to class D.*/