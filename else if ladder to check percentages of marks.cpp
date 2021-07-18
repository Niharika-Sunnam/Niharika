#include<stdio.h>
int main()
{
	int num;
	printf("Enter your mark ");
	scanf("%d", &num);
	printf("you entered %d", num);
	if (num >= 80){
		printf("you got A grade");
	    } 
	else if (num >= 60){
		printf("You got B grade");
	    }
	else if (num >= 40){
		printf("you got C grade");
	    }
	else if (num < 40){
		printf("you failed in exam");
	    }
	    
	    return 0;
	  
}
	    
		
	

