#include <stdio.h>

void main()
{
int a,b,c,d;

printf("Enter the value of a:");
scanf("%d",&a);
printf("Enter the value of b:");
scanf("%d",&b);

c=(a+b)*a;
d=(a+b)*b;

if (c>d)
{
	printf("%d",c);
}
else if (c<d)
{
	printf("%d",d);
}
else
{
	printf("No output");
}
}

