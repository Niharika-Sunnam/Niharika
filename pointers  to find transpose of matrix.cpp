#include<stdio.h>
#include<stdlib.h>
int main()
{
	int matrix[10][10],i,j,r,c;
	printf("\nHow many rows and columns in the matrix: ");
	scanf("%d%d", &r, &c);
	printf("\nEnter the elements: ");
	for(i=0;i<r;i++)
	for(j=0;j<c;j++)
	{
		scanf("%d",&matrix[i][j]);
	}
	printf("\n The transpose of matrix is: \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		   printf("%5d",matrix[j][i]);
		printf("\n");   
	}
	return 0;
}
