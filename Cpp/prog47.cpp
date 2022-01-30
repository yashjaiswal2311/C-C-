#include <iostream>
using namespace std;
class Test
{
	int a,b;
	friend class Test1;
};
class Test1
{
	int c,d;
	Test t;				//we can also define a objest of a class inside another friend class.
	public:
		void setData()			//in previous codes we have defined it in parameter.
		{
			cout<<"Enter value of a:";
			cin>>t.a;
			cout<<"Enter value of b:";
			cin>>t.b;
			cout<<"Enter value of c:";
			cin>>c;
			cout<<"Enter value of d:";
			cin>>d;
		}
		void showData()
		{
			cout<<"Value of a:"<<t.a<<endl;
			cout<<"Value of b:"<<t.b<<endl;
			cout<<"Value of c:"<<c<<endl;
			cout<<"Value of d:"<<d<<endl;
		}
};
int main()
{
	Test1 t1;
	t1.setData();
	t1.showData();
	return 0;
}

