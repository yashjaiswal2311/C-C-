#include <iostream>
using namespace std;
class Num
{
	public:
		void increment()
			{
				int x = 0;	
				x++;
				cout<<"Value of x = "<<x<<endl;
			}
};
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
//value is not incrementing like previous example cause it is not a static variable so the value is only
//incrementing once.