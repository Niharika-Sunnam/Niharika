#include<stdio.h>
int main()
{
	int age;
	printf("Enter Age of Person: ");
	scanf("%d",& age);
	if(age>17)
	   printf("\nPerson is eligible for Vote");
	else
	   printf("\nPerson is NOT eligible for Vote");
	
	return 0;      
}
