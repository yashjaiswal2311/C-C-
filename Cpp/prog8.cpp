#include <iostream>
using namespace std;
class Member
{
	public:
		static char x;
		int y;
};
char Member :: x;

int main()
{
	Member m;
	Member :: x = 'S';
	//m.x = 'S'
	m.y=80;

	cout<<"x = "<<Member::x<<endl;
	//cout<<"x = "<<m.x<<endl;
	cout<<"y = "<<m.y<<endl;
	return 0;
}
