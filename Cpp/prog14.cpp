#include <iostream>
using namespace std;
struct Test
{
	public:
		int result;
		int x;
		int i;
		void setData()
		{
			cout<<"Enter number:";
			cin>>x;
		}
		void table()
		{
			for(i=10;i>=1;i--)
				{
					result = x*i;
					cout<<""<<x<<"x"<<""<<i<<" = "<<result<<endl;
				}
		}
};
int main()
{
	struct Test t;
	t.setData();
	t.table();
	cout<<"Test Running"<<endl;
}