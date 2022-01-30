#include <iostream>
using namespace std;

class Test
{
	public:
		int add(int x,int y)
			{
				cout<<"x: "<<x<<"||"<<"y: "<<y;
				return x+y;
			}
};
int main()
{
	Test t;
	int a,b;
	cout<<"Enter value:"<<endl;
	cin>>a;
	cout<<"Enter value:"<<endl;
	cin>>b;

	int z = t.add(a,b);
	cout<<"\nAddition: "<<z<<endl;
}
