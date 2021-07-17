#include<stdio.h>
int main()
{
	double wi1, ci1, wi2, ci2, result;
	printf("Weight - Item1: ");
	scanf("%1f", &wi1);
	printf("No. of item1: ");
	scanf("%1f", &ci1);
	printf("Weight - Item2: ");
	scanf("%1f", &wi2);
	printf("No. of item2: ");
	scanf("%1f", &ci2);
	result = ((wi1 * ci1) + (wi2 * ci2)) / (ci1 + ci2);
	printf("Average Value = %f\n", result);
	return 0;
	
}
