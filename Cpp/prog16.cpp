#include <iostream>
using namespace std;
class Employee
{
    public:
		string fname,lname,email,dprmnt;
		int eid,salary;

		void setData()
			{
				cout<<"Enter First Name:";
				cin>>fname;
				cout<<"Enter Last Name:";
				cin>>lname;
				cout<<"Enter Email:";
				cin>>email;
				cout<<"Enter Department:";
				cin>>dprmnt;
				cout<<"Enter EmployeeId:";
				cin>>eid;
				cout<<"Enter Salary:";
				cin>>salary;
			}
			void showData()
			{
				cout<<"Emp.Id:"<<eid<<endl;
				cout<<"Department:"<<dprmnt<<endl;
				cout<<"Emp.Name:"<<fname<<""<<""<<lname<<endl;
				cout<<"Email:"<<email<<endl;
				cout<<"Salary:"<<salary<<endl;
			}
};
int main()
{
	Employee e1,e2,e3;
	e1.setData();
	e2.setData();
	e3.setData();
	cout<<""<<endl;
	e1.showData();
	e2.showData();
	e3.showData();

	return 0;
}