#include<stdio.h>
struct book 
{
	int bno;
	char name[10];
	float price;
};
int main()
{
	struct book b;
	printf("\nEnter Book Number\n");
	scanf("%d",&b.bno);
	printf("\nEnter Book Name\n");
	fflush(stdin);
	gets(b.name);
	printf("\nEnter Book Price\n");
	scanf("%f",&b.price);
	
	printf("\nBook Details...\n");
	printf("\nBook Number = %d",b.bno);
	printf("\nBook Name = %s",b.name);
	printf("\nBook Price = %f",b.price);
	return 0;
	
}
