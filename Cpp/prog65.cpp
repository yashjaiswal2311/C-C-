#include <iostream>
using namespace std;
class Test
{
	int a;
	public:
		//void operator ==(Test t2)
		void compare(Test t2)
		{
			if (a>t2.a)
			{
				cout<<"A"<<endl;
			}
			else if (a<t2.a)
			{
				cout<<"B"<<endl;
			}
			else 
			{
				cout<<"Equal"<<endl;
			}
		}
		void setData()
		{
			cout<<"Enter value of a:";
			cin>>a;
		}		
};
int main()
{
	Test t1,t2;
	t1.setData();
	t2.setData();
	t1.compare(t2);
	return 0;
}

