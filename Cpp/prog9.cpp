#include <iostream>
using namespace std;
class Num
{
	public:
		static int a;						//for static data members of integer type default value is '0'.
			void increment()
				{
					Num :: a++;
					cout<<"a = "<<Num::a<<endl;
				}
};
int Num :: a;

int main()
{
	Num n1,n2,n3,n4,n5;
	n1.increment();
	n1.increment();
	n1.increment();


