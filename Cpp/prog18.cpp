									/*[CONSTRUCTORS]
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
		void m1()
		{
			cout<<"User-Defined m1 function"<<endl;
		}
};
int main()
{
	Box b1;
	Box b2;
	b1.m1();
	cout<<"Body of main function"<<endl;
	return 0;
}