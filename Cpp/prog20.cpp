									/*[CONSTRUCTORS]
							(User-Defined Default Constructor)
							(User-Defined Default Constructor)*/
#include <iostream>
using namespace std;
class Box
{
	public:
		Box()							//constructor
		{
			cout<<"User-Defined Default Constructor"<<endl;
		}
		Box(int x)							//constructor
		{
			cout<<"User-Defined Parameterized Constructor 1"<<endl;
		}
		Box(int x,int y)							//constructor
		{
			cout<<"User-Defined Parameterized Constructor 2"<<endl;
		}
		void m1()
		{
			cout<<"User-Defined m1 function"<<endl;
		}
};
int main()
{
	Box b1;
	Box b2(10);
	Box b3('A');
	b1.m1();
	cout<<"Body of main function"<<endl;
	return 0;
}

//if the constructor is parameterized and we want to be called then we have to pass the parameter of that same type 
//which type of parameter that constructor consist. Although variables name can be same.