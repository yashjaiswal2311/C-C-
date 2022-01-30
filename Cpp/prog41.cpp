#include "iostream"
using namespace std;

void add(int a=25,int b=30,int c=45)
{
	int sum = a+b+c;
	cout<<"Sum = "<<sum<<endl;
}
int main()
{
	add();
	return 0;
}

/*[Note:- we must set the default values from right to left.]
like (int a,int b,int c=0);
	 (int a,int b=0,int c=0);
	 (int a=0,int b=0,int c=0);
	 [left<--------------right]*/