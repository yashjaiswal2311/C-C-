#include<iostream>
using namespace std;

class stu
{
	public:
		int stdid;
		char grade;
		string stdname;

		void report()
			{
				cout<<"Enter StudentId:";
				cin>>stdid;
				cout<<"Enter Name of Student:";
				cin>>stdname;
				cout<<"Enter Grade:";
				cin>>grade;
				cout<<endl;
			}
		void show()
			{
				cout<<stdid<<endl;
				cout<<stdname<<endl;
				cout<<grade<<endl;
				cout<<endl;
			}
};

int main()
{
	class stu s1,s2;
	s1.report();
	s2.report();
	s1.show();
	s2.show();
}



