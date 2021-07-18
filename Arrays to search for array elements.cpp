#include<stdio.h>
int main()
{
	int arr[10], Size, i, Search, Flag;
	printf("\n Enter the Size of an array : ");
	scanf("%d", &Size);
	
	printf("\n Enter %d elements of an array : \n", Size);
	for(i = 0; i < Size; i++)
	{
		scanf("%d, &Search");
	}
	printf("\n Enter the Search element : ");
	scanf("%d", &Search);
	
	Flag = 0;
	for(i = 0; i < Size; i++)
	{
		if(arr[i] == Search)
		{
			Flag = 1;
			break;
		}
	}
	
	if(Flag == 1)
	{
		printf("\n We found the Search element %d at position %d ", Search, i + 1);
		
}
    else
    {
    	printf("\n We haven't found the Search element %d ", Search);
    
	return 0;	
	}
}
	
