#include<stdio.h>
int main()
{
	int first, second, *a, *b, sum;
	printf("Enter two integers to add\n");
	scanf("%d%d", &first, &second);
	
	a = &first;
	b = &second;
	sum = *a + *b;
	printf("Sum of entered numbers = %d\n",sum);
	
	return 0;
}
