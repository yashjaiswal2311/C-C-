										//[Method Overloading]
#include <iostream>
using namespace std;
class Test
{
	public:
		void m1()
		{
			cout<<"Test class m1 method"<<endl;
		}
		void m1(int x)
		{
			cout<<"Test class 1 argument m1 method"<<endl;
		}
};
int main()
{
	Test t;
	t.m1();
	t.m1(20);
	return 0;
}