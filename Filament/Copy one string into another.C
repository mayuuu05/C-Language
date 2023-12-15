//5. Copy one string into another - strcpy()

#include<stdio.h>
#include<string.h>

int main()
{

    char a[50]; 
    printf("Enter  the string : ");
    gets(a);
    
    int i;
    
    char b[50];
    for(i=0; i<strlen(a); i++)
    {
    	b[i]=a[i];
	}
	printf("Your first string is :%s\n",a);
	printf("Second copy string is : %s",b);
}