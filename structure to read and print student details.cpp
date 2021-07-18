#include<stdio.h>

struct student{
	char name[50];
	int roll;
};
int main(){
	int i,n;
	char temp;
	 printf("Enter total number of students in a class: ");
	 scanf("%d", &n);
	 
	 for(i=0;i<n;i++){
	 	printf("Enter student [%d] roll no.: ",i+1);
	 	scanf("%d",& cls.std[i].roll);
	 	printf("Enter student [%d] name: ",i+1);
	 	scanf("%c", &temp);
	 	fgets(cls.std[i].name,50,stdin);
	 	
	 }
	 printf("\nDetails are: \n");
	 printf("Class name: %s\n",cls.classname);
	 for(i=0;i<n;i++)
	         printf("student[%d]: %05d\t%s\n",i+1,cls.std[i].roll,cls.std[i].name);
	      return 0;   
}
