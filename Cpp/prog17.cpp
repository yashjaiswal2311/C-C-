									/*[CONSTRUCTORS]
							(User-Defined Default Constructor)*/
#include <iostream>
using namespace std;
class Box
{
	public:
		Box()
		{
			cout<<"User-Defined Default Constructor"<<endl;
		}
};
int main()
{
	Box b1;
	Box b2;
	cout<<"Body of main function"<<endl;
	return 0;
}