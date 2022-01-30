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
	Test t,t1,t2;
	cout<<"Main method"<<endl;
	return 0;
}


/*'~' sign is used before the class name to create destructor.
it executes implicitly just before termination of application,but it doesn't create implicitly we have to create 
it.

if we create more than one object same number of time constructor will run to create it and destructor 
will destroy it implicitly.

constructor should always be created in public region because object creation is done outside the class so
if  it is defined inside private region then that user defined constructor will not work then default constructor
will create it.*/

