#include<stdio.h>
int main()
{
	int week;
	printf("Enter week number(1-7): ");
	scanf("%d", &week);
	switch(week)
	{
		case 1:
			printf("MONDAY");
			break;
		case 2:
		    printf("TUESDAY");
		    break;
		case 3:
		    printf("WEDNESDAY");
		    break;
		case 4:
		    printf("THURSDAY");
		    break;
		case 5:
		    printf("FRIDAY");
		    break;
		case 6:
		    printf("SATURDAY");
		    break;
		case 7: 
		    printf("SUNDAY");
			break;
		default:
		    printf("Invalid input! enter week betwen (1-7).");							
	}
	return 0;
}
