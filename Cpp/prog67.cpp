								//[Operator Overloading]
							//Concatenation of two strings
#include <iostream>
using namespace std;
class Test
{
	public:
		char arr[20];
		
		//void concate(Test t2)
		void operator||(Test t2)
		{
			cout<<arr<<""<<t2.arr<<endl;
		}
		void setData()
		{
			cout<<"Enter Name:";
			cin>>arr;
		}
};
int main()
{
	Test t1,t2;
	t1.setData();
	t2.setData();
	t1 || t2;
	//t1.concate(t2);
	return 0;
}
