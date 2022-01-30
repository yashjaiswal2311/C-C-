//to assign values to String we will use 'strcpy' function and it is the standard method also.

#include <stdio.h>
#include <string.h>

struct student
{
	int studentId;
	char firstName[20];
	char lastName[20];
	char branch[15];
	char email[15];
	int age;
};

void main()
{
	struct student s;
	char fName[20];				//local variables to hold value then the value will be assign to string by strcpy function
	char lName[20];
	char br[15];
	char em[15];

	printf("Enter studentId number:");
	scanf("%d",&s.studentId);

	printf("Enter First Name:");
	scanf("%s",fName);
	strcpy(s.firstName,fName);

	printf("Enter Last Name:");
	scanf("%s",lName);
	strcpy(s.lastName,lName);

	printf("Enter Branch:");
	scanf("%s",br);
	strcpy(s.branch,br);

	printf("Enter Email:");
	scanf("%s",em);
	strcpy(s.email,em);

	printf("Enter Age:");
	scanf("%d",&s.age);

	printf("\nStudentId :%d\n",s.studentId);
	printf("Name :%s %s\n",s.firstName,s.lastName);
	printf("Branch :%s\n",s.branch);
	printf("Email :%s\n",s.email);
	printf("Age :%d",s.age);
}

