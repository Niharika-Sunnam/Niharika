#include<stdio.h>
int main(){
	int count=0;
	int num;
	int arr[100],i=0;
	
	while(num!=-1){
		printf("Enter an integer number (-1 to exist): ");
		count+=scanf("%d",&num);
		arr[i++]=num;
	}
	printf("\nTotal inputs (including 0) are : %d\n",count);
	printf("Entered numbers are:\n");
	for(i=0;i<count;i++){
		printf("%d",arr[i]);
	}
	printf("\n");
	return 0;
}