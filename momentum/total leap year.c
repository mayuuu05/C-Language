//10. wap to find total leap year between given two number. 

#include<stdio.h>
main()
{
	int first_year;  
    printf("Enter a first year: ");  
    scanf("%d",&first_year); 
	int second_year;  
    printf("Enter a second year: ");  
    scanf("%d",&second_year); 
	int total,x;
	
	total=second_year - first_year;
	x=(total/4)+1;
	printf("Total leap year is %d",x);
	

}