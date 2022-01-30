									//[Operator Overloading]
#include <iostream>
using namespace std;
class Test
{
	int a;
	public:
		//void compare(Test t2)
		void operator ==(Test t2)
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
	t1 == t2;
	//t1.compare(t2);
	return 0;
}


/*function overloading is in which a operator is overloaded to provide the special meaning to the user defined
datatype.

to perform operator overloading write 'operator' and sign of operator we want to overload
operator +

in the code we can define any operator to overload what is does that we are assigning a operator to that function
like t1.compare(t2) is replaced by t1 == t2 we acn assign any operator in the place of == like +,-,/,? etc.*/