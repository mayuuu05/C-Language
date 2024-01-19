#include<stdio.h>

int main()
{
	char a;
	
	printf("Enter the character which you want : ");
	scanf("%c",&a);
	
	switch(a)
	{
		case 'a' : 
			printf("Entered character is vowel");
			break;
			
		case 'A' : 
			printf("Entered character is vowel");
			break;
			
		case 'e' : 
			printf("Entered character is vowel");
			break;
		
		case 'E' : 
			printf("Entered character is vowel");
			break;
			
		case 'i' : 
			printf("Entered character is vowel");
			break;
			
		case 'I' : 
			printf("Entered character is vowel");
			break;
			
		case 'o' : 
			printf("Entered character is vowel");
			break;
			
		case 'O' : 
			printf("Entered character is vowel");
			break;
			
		case 'u' : 
			printf("Entered character is vowel");
			break;
			
		case 'U' : 
			printf("Entered character is vowel");
			break;
			
		default : 
			printf("Entered character is consonant");
	}
	
	return 0;
}