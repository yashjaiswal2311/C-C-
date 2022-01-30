									//CLASS AND STRUCTURE 
#include <iostream>
using namespace std;

struct Test
{
	int x;
	int y;
};

class Test1
{
	public:
		int x;
		int y;
};

int main()
{
	struct Test t;
	class Test1 t1;

	t.x=10;
	t1.x=20;
												//or in c it is written as
	cout<<"Value of x:";						//printf("Value of x:");
	cout<<t.x<<endl;							//printf("%d\n",t.x);
	cout<<"Testing Structure"<<endl;			//printf("Testing\n");

	cout<<"Value of x:"<<t1.x<<endl;
	cout<<"Testing Class"<<endl;
}

//COMPILE TIME ERROR cause by default class is private so its variables can not be accessed from outside.
//to solve this put 'public' keyword in class scope. 