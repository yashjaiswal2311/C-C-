								//[FRIEND CLASS]
#include <iostream>
using namespace std;

class Test
{
	int a,b;
	public:
		void setData()
		{
			cout<<"Enter value of a:";
			cin>>a;
			cout<<"Enter value of b:";
			cin>>b;
		}
		friend class Test1;			//declaration of friend class will always be done inside the orignal class
};									//and then mention another class name which we want to make friend of orignal
class Test1							//class.
{
	public:
		void showData(Test t)		//its parameter type is class type we are using class Test variables so	
		{							//we can only use them by its object.
			cout<<"Value of a:"<<t.a<<endl;
			cout<<"Value of b:"<<t.b<<endl;
			cout<<"Sum = "<<t.a+t.b<<endl;
		}
};
int main()
{
	Test t;
	Test1 t1;
	t.setData();
	t1.showData(t);
	return 0;
}