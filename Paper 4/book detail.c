#include<stdio.h>
#include<conio.h>
#include<string.h>

struct book
{
	char title[50],author[50];
	int price;
};
main()
{
	char title[50],author[50];
	int n;
	printf("Enter book number :");
	scanf("%d",&n);
	struct book b1[n];
	
	
    for(int i=1 ; i<=n; i++)
    {
    	
        printf("\n------Book %d------\n",i);
        
    	printf("\nEnter book title:");
		scanf("%[^\n]s",title);
		strcpy(b1[i].title,title);
		
		printf("\nEnter book author name:");
		scanf("%[^\n]s",author);
		strcpy(b1[i].author,author);
		
		printf("\nEnter book price :");
		scanf("%d",&b1[i].price);
		
		printf("\n\n=>The Book %d details are given below\n\n", i);
		
		printf("Title   : %s\n",b1[i].title);
		printf("author  : %s\n",b1[i].author);
		printf("Price   : %d\n",b1[i].price);
		
	}
	
}