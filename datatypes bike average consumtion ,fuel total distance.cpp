#include<stdio.h>
int main()
{
    int a;
	float b;
	printf("Input total distance in km: ");
	scanf("%d",&a);
	printf("Input total spent in liters: ");
	scanf("%e",&b);
	printf("Average consumption (km/lt) %.3f ",a/b);
	printf("\n");
	
	return 0;	
}
