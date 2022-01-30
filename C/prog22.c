#include <stdio.h>
void adcell();
void form();
void fees();
void ic();

void college()
{
	printf("Go to admission room>\n");
	adcell();
}

void adcell()
{
	printf("Fill the Form\n");
	form();
}

void form()
{
	printf("Submit form\n");
	fees();
}

void fees()
{
	printf("Deposit fees: 50000\n");
	ic();
}

void ic()
{
	printf("Get your ic");
}

void main()
{
	printf("Admission in a college\n");
	college();
}