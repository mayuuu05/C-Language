//Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
//For example, 
//Output:
//Even numbers from even_file.txt:
//50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70
//
//Odd numbers from odd_file.txt:
//51, 53, 55, 57, 59, 61, 63, 65, 67, 69

#include<stdio.h>

main()
{
	FILE *fp1;
	fp1 = fopen("Even_file.txt","w");
	
	
	printf("Even numbers from even_file.txt :\n");
	fprintf(fp1,"Even numbers from even_file.txt :\n");	
	int x = 50;
	int y = 70;
	
	int i;
	
	for(i=x ; i<=y ; i++)
	{
		if(i%2==0)
		{
			printf(" %d\n",i);
			fprintf(fp1,"%d\n",i);
		}
	}
	
	
	FILE *fp2;
	fp2 = fopen("Odd_file.txt","w");
	
	printf("Odd numbers from odd_file.txt :\n");
	fprintf(fp2,"Odd numbers from odd_file.txt :\n");	
	
	int a = 50;
	int b = 70;
	
	int j;
	
	for(j=a ; j<=b ; j++)
	{
		if(j%2==1)
		{
			printf(" %d\n",j);
			fprintf(fp2,"%d\n",j);
		}
	}
	
}