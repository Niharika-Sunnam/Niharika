#include<stdio.h>
int main()
{
	float cm, meter, km;
	printf("Enter length in centimeter: ");
	scanf("%f", &cm);
	meter = cm / 100;
	km    = cm / 100000;
	printf("Length in Meter = %. 2f m \n", meter);
	printf("Lemgth in Kilometer = %.2f km \n", km);
	
	return 0;
}
