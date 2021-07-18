#include<stdio.h>
int main()
{
	int a, b, c, d, larg;
	printf("Enter four numbers\n");
	scanf("%d%d%d%d",&a, &b, &c, &d);
	larg = ((a>b&&a>c&&a>d) ? a:(b>c&&b>d) ?b:(c>d)?c:d);
	printf("largest number is:%d",larg);
	return 0;
}
