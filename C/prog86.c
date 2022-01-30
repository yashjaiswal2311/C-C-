//'typedef' is a keyword used to assign new name or synonyms to a type.

#include <stdio.h>
#include <string.h>

typedef char String[50];			//now 'string' variable is working as a char[](character array) of length 50. 	
void main()
{
	String name;
	strcpy(name,"Cristiano");
	printf("%s",name);
}
