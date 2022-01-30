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
	struct student s,s1;
	char fName[20];
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

	printf("\nEnter studentId number:");
	scanf("%d",&s1.studentId);

	printf("Enter First Name:");
	scanf("%s",fName);
	strcpy(s1.firstName,fName);

	printf("Enter Last Name:");
	scanf("%s",lName);
	strcpy(s1.lastName,lName);

	printf("Enter Branch:");
	scanf("%s",br);
	strcpy(s1.branch,br);

	printf("Enter Email:");
	scanf("%s",em);
	strcpy(s1.email,em);

	printf("Enter Age:");
	scanf("%d",&s1.age);

	printf("\nStudentId :%d\n",s.studentId);
	printf("Name :%s %s\n",s.firstName,s.lastName);
	printf("Branch :%s\n",s.branch);
	printf("Email :%s\n",s.email);
	printf("Age :%d\n",s.age);

	
	printf("\nStudentId :%d\n",s1.studentId);
	printf("Name :%s %s\n",s1.firstName,s1.lastName);
	printf("Branch :%s\n",s1.branch);
	printf("Email :%s\n",s1.email);
	printf("Age :%d",s1.age);
}

