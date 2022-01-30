									//['this' pointer]
//'this' pointer is denoted like =(this->) or (*this.)

#include <iostream>
using namespace std;
class Box
{
	public:
		int length,height,width;
		Box(int length)
		{
			this->length = this->height = this->width = length;
			cout<<"Cube Created"<<endl;
		}
		Box(int length,int height,int width)
		{
			this->length = length;
			this->height = height;
			this->width = width;
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
	Box b2(5,15,25);
	b2.result();
	cout<<"Body of main function"<<endl;
	return 0;
}
