#include<stdio.h>
intmain()
{
	int num;
	printf("Enter an integer: ");
	scanf("%d",&num);
	
	if(num % 2 == 0)
	   printf("%d is odd.", num);
	return 0;   
}
