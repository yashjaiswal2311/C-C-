#include<iostream>
using namespace std;

class Box
{
	public:
		int length,width,height;
		int result;

		void setData()
			{
				cout<<"Enter Length:";
				cin>>length;
				cout<<"Enter Width:";
				cin>>width;
				cout<<"Enter Height:";
				cin>>height;
			}
		void volume()
			{
				result = length*width*height;
				cout<<"Volume of Box:"<<result<<endl;
			}
};
int main()
{
	Box b1,b2,b3;
	b1.setData();
	b1.volume();
	cout<<"Completed"<<endl;
	cout<<endl;

	b2.setData();
	b2.volume();
	cout<<"Completed"<<endl;
	cout<<endl;

	b3.setData();
	b3.volume();
	cout<<"Completed"<<endl;
	return 0;
}