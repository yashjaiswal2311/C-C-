#include <stdio.h>
#include <string.h>
struct student
{
	int studentId;
	int fees;
	char name[20];
};
typedef struct student stu; 
void main()
{
	//struct student s[3];			//no need to write this coz typedef is defined for it.
	stu s[3];						//write it.
	char n[20];
	int i;

	for (i=0;i<3;i++)
	{
		printf("\nEnter StudentId:");
		scanf("%d",&s[i].studentId);
		printf("Enter Fees:");
		scanf("%d",&s[i].fees);
		printf("Enter Name:");
		scanf("%s",n);
		strcpy(s[i].name,n);
	}
	for (i=0;i<3;i++)
	{
		printf("\nStudentId:%d\n",s[i].studentId);
		printf("Fees:%d\n",s[i].fees);
		printf("Name:%s\n",s[i].name);
	}
}