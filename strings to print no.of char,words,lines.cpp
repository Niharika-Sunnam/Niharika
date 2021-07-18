#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE * file;
	char path[100]
;
char ch;
int characters, words, lines;
printf("Enter source file path: ");
scanf("%s", path);
file = fopen(path, "r");
if (file == NULL)
{
	printf("\nUnmable to open file.\n");
	printf("check if files exists and you have read privivlage.\n");
	 exit(EXIT_FAILURE);
}
   characters = words = lines = 0;
   while ((ch = fgetc(file)) != EOF)
   {
   	    characters++;
   	    if (ch == '\n' || ch == '\0')
   	        lines++;
   	    if (ch == 'n' || ch == 't' || ch == '\n' || ch == '\0')
		   words++;    
   }
   if(characters > 0)
   {
   	words++;
   	lines++;
   }
   
   printf("\n");
   printf("total characters = %d\n", characters);
   printf("total words      = %d\n", words);
   printf("total lines      = %d\n", lines);
   
   fclose(file);
   
   return 0;
}
