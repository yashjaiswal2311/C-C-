#include <iostream>
using namespace std;
class Box
{
	public:
		int length,height,width;
		Box(int x)
		{
			length = height = width = x;
			cout<<"Cube Created"<<endl;
		}
		Box(int l,int h,int w)
		{
			length = l;
			height = h;
			width = w;
			cout<<"Cuboid Created"<<endl;
		}
		void result()
		{
			int volume = length*height*width;
			cout<<"Volume: "<<volume<<endl;
		}
};
int main()
{
	Box b1(20);
	b1.result();
	Box b2(10,15,20);
	b2.result();
	cout<<"Body of main function"<<endl;
	return 0;
}
