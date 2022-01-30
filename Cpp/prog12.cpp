#include <iostream>
using namespace std;
struct Test
{
	public:
		int result;
		void setData()
		{
			cout<<"Enter first number:"<<endl;
			cin>>x;
			cout<<"Enter Second number:"<<endl;
			cin>>y;
		}
		void sum()
		{
			result = x+y;
		}
	private:
		int x;

	protected:
		int y;
};
int main()
{
	struct Test t;
	t.setData();
	t.sum();
	cout<<"Result = "<<t.result<<endl;
	cout<<"Test Msg";
}