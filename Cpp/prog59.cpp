								//[Destructor]:- 
#include <iostream>
using namespace std;
class Test
{
	public:
		Test()
		{
			cout<<"class Test 0 argument Constructor"<<endl;
		}
	   ~Test()
		{
		   cout<<"class Test Destructor"<<endl;
		}
};
int main()
{
	Test t;
	cout<<"Main method"<<endl;
	return 0;
}


/*'~' sign is used before the class name to create destructor.
 it executes implicitly just before termination of application,but it doesn't create implicitly we have to create it.*/

