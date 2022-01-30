#include<stdio.h>
union uni
{
	int a;
	int b;
};
int main()
{
	union uni u;
	u.a = 10;
	printf("a=%d , b=%d",u.a,u.b);
	u.b = 20;
	printf("a=%d , b=%d",u.a,u.b);
	return 0;
}