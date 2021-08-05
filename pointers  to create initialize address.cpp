#include<stdio.h>
int main()
{
	//char variable
	char ch;
	//char pointer
	char *pCh;
	pCh = &ch;
	//assigning value to the variable ch
	ch = 'A';
	//access value and address of ch using variable ch
	printf("Value of ch: %c\n",ch);
	printf("Address of ch: %p\n",&ch);
	//access value and address of ch using pointer variable pCh
	printf("Value of ch: %c\n",*pCh);
	printf("Address of ch: %p",pCh);
	
	return 0;
	
}
