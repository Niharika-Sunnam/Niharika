#include<stdio.h>
int main()
{
	int sec, HH, MM, SS;
	printf("Enter time in seconds: ");
	scanf("%d", &sec);
	HH = sec/3600;
	MM = (sec - HH*3600)/60;
	SS = sec - HH*3600 - MM*60;
	printf("%d seconds = %d hours : %d minutes : %d seconds", sec, HH, SS, MM);
	 return 0;
}
