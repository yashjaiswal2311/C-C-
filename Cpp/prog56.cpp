									//[Swapping]
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int b = 20;
	int c;

	cout<<"a = "<<a<<endl;							//before swapping
	cout<<"b = "<<b<<endl;

	c=a;
	a=b;
	b=c;

	cout<<"a = "<<a<<endl;							//after swapping
	cout<<"b = "<<b<<endl;
	return 0;
}

/*like in the diagram we need a extra blank to swap the balls between two boxes
same as in the code we are taking c as a blank box and swapping the values  between them*/

