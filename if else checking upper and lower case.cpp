#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter the character : ");
	scanf("%c", &ch);
	 
	 if (ch >= 'A' && ch <= 'Z')
	    printf("Character is Upper case Letters");
	 else
	    printf("Character is Not Upeer case Letters");
	
	return 0;	   
}
