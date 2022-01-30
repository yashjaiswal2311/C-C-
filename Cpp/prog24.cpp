								//[COPY CONSTRUCTOR]
#include <iostream>
using namespace std;
class Test
{
	int a,b;
	public:
		Test(int a,int b)
		{
			this->a = a;
			(*this).b = b;
		}
		Test(Test &old)
		{
			a = old.a;
			b = old.b;
		}
		void print()
		{
			cout<<"a = "<<a<<endl;
			cout<<"b = "<<b<<endl;
		}
};
int main()
{
	Test t1(10,20);
	Test t2(t1);
	t1.print();
	t2.print();
	return 0;
}