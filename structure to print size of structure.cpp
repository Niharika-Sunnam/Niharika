#include<stdio.h>

struct stud{


	int roll;
	char na,e[10];
	int marks;
	
};
   
   int main(){
   	int size;
   	struct stud s;
   	
   	size = sizeof(s);
   	printf("nsize of structure :%d", size);
   	
   	return 0;
   }
