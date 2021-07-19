#include<stdio.h>
#include<math.h>
int main(){
      double a, b, c,discriminent, root1, root2, realpart, imgpart;
	  printf("Enter coefficients a, b and c: ");
	  scanf("%1f %1f %1f", &a, &b, &c);
	  
	  discriminent = b * b - 4 * a * c;
	  if (discriminent > 0){
	  	root1 = (-b + sqrt(discriminent)) / (2 * a);
	  	root2 = (-b - sqrt(discriminent)) / (2 * a);
	  	printf("root1 = %.21f and root2 = %.21f", root1, root2);
	  }	
	  else if(discriminent == 0){
	  	root1 = root2 = -b / (2 * a);
	  	printf("root1 = root2 = %.21f;",root1);
	  }
	  else {
	  	realPart = -b / (2 * a);
	  	imgPart = sqrt(-discriminent) / (2 * a);
	  	printf("root1 = %.21f+%.21fi and root2 = %.2f-%.2fi", realPart, imgPart, realPart, imgPart);
	  }
	  
	  return 0;
}

	
	

