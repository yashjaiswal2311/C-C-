#include <iostream>
using namespace std;
class Num
{
	public:
		static int x;						//for static data members of integer type default value is '0'.
			void increment()
				{
					Num :: x++;
					cout<<"Value of x = "<<Num::x<<endl;
				}
};
int Num :: x;

int main()
{
	Num n1,n2,n3,n4,n5;
	n1.increment();
	n2.increment();
	n3.increment();
	n4.increment();
	n5.increment();
	return 0;
}
