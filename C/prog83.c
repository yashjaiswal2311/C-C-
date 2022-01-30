#include <stdio.h>
#include <string.h>

struct Employee
{
	int employeeId;
	char firstName[30];
	char lastName[30];
	int salary;
};
void main()
{	
	struct Employee e[3];

	int i;
	char fn[30];
	char ln[30];

	for (i=0;i<3;i++)
	{
		printf("\n");
		printf("Enter EmplyeeId:");
		scanf("%d",&e[i].employeeId);

		printf("Enter First Name:");
		scanf("%s",fn);
		strcpy(e[i].firstName,fn);

		printf("Enter Last Name:");
		scanf("%s",ln);
		strcpy(e[i].lastName,ln);

		printf("Enter Salary:");
		scanf("%d",&e[i].salary);
	}

	for (i=0;i<3;i++)
	{
		printf("\nEmplyeeId:%d\n",e[i].employeeId);
		printf("First Name:%s\n",e[i].firstName);
		printf("Last Name:%s\n",e[i].lastName);
		printf("Salary:%d\n",e[i].salary);
	}
}

