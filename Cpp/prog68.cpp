								//[Operator Overloading]
#include <iostream>
using namespace std;
class Test
{
	public:
		int a;	
		//void multiply(Test t2)
		void operator *(Test t2)
		{
			cout<<""<<a<<"x"<<""<<t2.a<<" = "<<a*t2.a<<endl;
		}
		void setData()
		{
			cout<<"Enter value for a:";
			cin>>a;
		}
};
int main()
{
	Test t1,t2;
	t1.setData();
	t2.setData();
	t1 * t2;
	//t1.multiply(t2);
	return 0;
}
