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
	cout<<"Value of x:";				//printf("Value of x:");
	cout<<t.x<<endl;					//printf("%d\n",t.x);
	cout<<"Testing"<<endl;				//printf("Testing\n");

	cout<<"Value of x:"<<t1.x<<endl;
	cout<<"Testing"<<endl;
}

//COMPILE TIME ERROR cause by default class is private so its variables can not be accessed from outside.