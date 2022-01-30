									//[Swapping]
							//Swapping values with pointer
#include <iostream>
using namespace std;
void swap(int*,int*);
int main()
{
	int a = 10;
	int b = 20;

	cout<<"a = "<<a<<endl;							//before swapping
	cout<<"b = "<<b<<endl;

	swap(&a,&b);									//calling 


	cout<<"a = "<<a<<endl;							//after swapping
	cout<<"b = "<<b<<endl;
	return 0;
}
void swap(int* a, int* b)
{
	 int c;
	 c = *a;
	*a = *b;
	*b =  c;
}

/*like in the diagram we need a extra blank to swap the balls between two boxes
same as in the code we are taking c as a blank box and swapping the values  between them*/