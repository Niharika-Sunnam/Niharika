#include<stdio.h>
int main()
{
	int i;
	printf("Even numbers between 200 to 300(inclusive):\n");
	for (i = 200; i <=300; i++)
	{
		if(i%2 == 0)
		{
			printf("%d ", i);
		}
	}
	
	return 0;
}
