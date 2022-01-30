#include <iostream>
using namespace std;
class Test
{
	int a,b;
	friend class Test1;
};
class Test1
{
	Test t;				//we can also define a objest of a class inside another friend class.
	public:
		int c,d;
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
};
class Test2 : public Test1
{
	public:
		void showData(Test1 t1)
		{
			//cout<<"Value of a:"<<t.a<<endl;			//cause it cannot use class Test private data members
			//cout<<"Value of b:"<<t.b<<endl;
			cout<<"Value of c:"<<t1.c<<endl;
			cout<<"Value of d:"<<t1.d<<endl;
		}
};
int main()
{
	Test1 t1;
	Test2 t2;
	t1.setData();
	t2.showData(t1);
	return 0;
}

