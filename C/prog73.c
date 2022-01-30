//for two students
#include <stdio.h>

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

	printf("Enter studentId number:");
	scanf("%d",&s.studentId);

	printf("Enter First Name:");
	scanf("%s",s.firstName);

	printf("Enter Last Name:");
	scanf("%s",s.lastName);

	printf("Enter Branch:");
	scanf("%s",s.branch);

	printf("Enter Email:");
	scanf("%s",s.email);

	printf("Enter Age:");
	scanf("%d",&s.age);

	printf("Enter studentId number:");
	scanf("%d",&s1.studentId);

	printf("Enter First Name:");
	scanf("%s",s1.firstName);

	printf("Enter Last Name:");
	scanf("%s",s1.lastName);

	printf("Enter Branch:");
	scanf("%s",s1.branch);

	printf("Enter Email:");
	scanf("%s",s1.email);

	printf("Enter Age:");
	scanf("%d",&s1.age);

	printf("\nSTUDENT 1:\n ");
	printf("\nStudentId :%d\n",s.studentId);
	printf("Name :%s %s\n",s.firstName,s.lastName);
	printf("Branch :%s\n",s.branch);
	printf("Email :%s\n",s.email);
	printf("Age :%d\n",s.age);

	printf("\nSTUDENT 2:\n ");
	printf("\nStudentId :%d\n",s1.studentId);
	printf("Name :%s %s\n",s1.firstName,s1.lastName);
	printf("Branch :%s\n",s1.branch);
	printf("Email :%s\n",s1.email);
	printf("Age :%d",s1.age);
}

