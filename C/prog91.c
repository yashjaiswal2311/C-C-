/*(ENUM)
"Enum is used to represent the group of constants as a single entity."
 DRAWBACK:- it is not strictly typechecked in 'c'*/

#include<stdio.h>
enum Direction {East,West,North,South};

int main()
{
	enum Direction d;
	d=East;
	for (d=East;d<=South;d++)
	{
		printf("%d",d);
	}
	return 0;
}