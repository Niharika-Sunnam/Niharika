#include<stdio.h>
int main()
{
	char name[40];
	char gender;
	printf("Enter name: ");
	gets(name);
	printf("Enter gender (M/F): ");
	scanf("%c", &gender);
	
	if(gender=='m'||gender=='M')
	     printf("Hello Mr. %s.\n",name);
	else if(gender=='f'||gender=='F')
	     printf("Hello Miss %s.\n",name);
	else 
		printf("Hello N/A %s.\n",name);
		
return 0;		      
}
