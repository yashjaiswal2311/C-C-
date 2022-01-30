#include <iostream>
using namespace std;

struct Test
{
	//private:					//if we declare structure as private then we can not use its members from outside
		int x;
		int y;
		void m1()
			{
				cout<<"Test Structure m1 Method"<<endl;
			}
};

int main()
{
	struct Test t;
	t.x = 10;
	t.y = 20;
	t.m1();

	cout<<"Value of x:"<<t.x<<endl;
	cout<<"Value of y:"<<t.y<<endl;
}