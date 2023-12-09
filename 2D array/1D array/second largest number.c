//2. Write a C program to find the second largest number in the array

#include<stdio.h>
main()
{
	int n;
	printf("Enter your array size :");
	scanf("%d",&n);//for user choice array size 
	
    int a[n];
	int i;
	for(i=0; i<n; i++)
	{
		printf("enter the value of a[%d]:",i);
		scanf("%d",&a[i]);//for enter your array value 
	}
    
    int first_num,second_num;
    first_num=a[0];
    second_num=a[1];
    for(i=0;i<n;i++)
    {
    	if(a[i]>first_num)
    	{
    		second_num = first_num;
    		first_num = a[i];
		}
		else if (a[i]>second_num  &&  a[i]!=first_num)
		{
			second_num=a[i];
		}
	}
	printf("The First Largest number is : %d\nThe Second largest number is : %d",first_num,second_num);
}