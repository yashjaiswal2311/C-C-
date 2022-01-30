#include <iostream>
using namespace std;
struct Test
{
	int x;
	int y;
};
int main()
{
	struct Test t;
	t.x = 100;
	t.y = 200;

	cout<<"Value of x:"<<t.x<<endl;
	cout<<"Value of y:"<<t.y<<endl;

	cout<<"Structure in C++"<<endl;
	return 0;
}