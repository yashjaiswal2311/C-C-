#include <iostream>
using namespace std;
class Maths
{
	int i,x,y,sum;
	public:
		void table()
		{
			cout<<"Enter value of x:";
			cin>>x;
			cout<<"Enter value of y:";
			cin>>y;

			for(i=1;i<=10;i++)
			{
				cout<<""<<x<<"*"<<""<<i<<" = "<<""<<x*i<<endl;
			}
			cout<<endl;
			for(i=1;i<=10;i++)
			{
				cout<<""<<y<<"*"<<""<<i<<" = "<<""<<y*i<<endl;
			}
		}
		friend class Result;
};

class Result
{
	public:
		void add(Maths m)
		{
			cout<<endl;
			m.sum=m.x + m.y;
			cout<<""<<m.x<<"+"<<""<<m.y<<" = "<<m.sum<<endl;
			cout<<endl;

			for(m.i=1;m.i<=10;m.i++)
			{
				cout<<""<<m.sum<<"*"<<""<<m.i<<" = "<<""<<m.sum*m.i<<endl;
			}
		}
};
int main()
{
	Maths m;
	Result r;

	m.table();
	r.add(m);
	return 0;
}