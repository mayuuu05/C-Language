//3.write a c program to remove space , blanks from a string.

#include<stdio.h>
#include<string.h>

main()
{
     char remove[100];
	 printf("Enter the name : ");
	 gets(remove);
	 
	 puts(remove);
	 printf("\n");	
	 puts("After remove space or blanks from a string:");
    
	 
	 int i,j;
	 
	 for(i=0;i<strlen(remove);i++)
	 {
	 	if(remove[i]==' ')
	 	{
	 		remove[i]=remove[i+1];
	 		i++;
	 		
		 } printf("%c",remove[i]);
	 }
}