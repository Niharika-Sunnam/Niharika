#include<stdio.h>
struct employee{
	char name[30];
	int empID;
	float salary;
};

int main()
{
	struct employee emp;
	printf("\nEnter details :\n");    
	printf("Name ?:");
	printf("ID ?:");
	printf("salary ?:");
	
	printf("\nEntered detail is:");
	printf("Name: %s", emp.name);
	printf("ID: %d", emp.empID);
	printf("salary: %f\n", emp.salary);
	
	return 0;
}
