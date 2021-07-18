#include<stdio.h>
int main()
{
	int a, b;
	char op;
	printf("Enter two integer values: ");
	scanf("%d%d", &a, &b);
	printf("Enter a operand + or - or * or / or %: ");
	scanf("%c",op);
	switch(op)
	{
		case '+':
			printf("Result is: %d",(a+b));
			break;
		case '-':
		    printf("Result is: %d",(a-b));
		    break;
		case '*':
		    printf("Result is: %d",(a*b));
		    break;
		case '/':
		     printf("Result is: %d",(a/b));
			 break;
		case '%':
		    printf("Result is: %d",(a%b));
			break;
		default:
		    printf("Invalid operand!");
			
		return 0;			     
					
	}
}
