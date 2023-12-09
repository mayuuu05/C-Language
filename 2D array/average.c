//Q.1 Write a Program to find the average of a given 2D array.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array's elements:
//a[0][0] = 2
//a[0][1] = 4
//a[0][2] = 1
//a[1][0] = 3
//a[1][1] = 5
//a[1][2] = 4
//a[2][0] = 8
//a[2][1] = 2
//a[2][2] = 6
//
//Output:
//Average of an Array: 3.88


#include<stdio.h>
 
main()
{
	int row,column;
	printf("Enter your array row size : ");
	scanf("%d",&row);
    printf("Enter your array column size : ");
	scanf("%d",&column);
	
	int a[row][column];
	int i,j;
	for(i=0 ;i<row; i++)
	{
		for(j=0; j<column ;j++)
		{
		    printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	float average,sum=0;
	for(i=0;i<row;i++)
	{
		for(j=0; j<column; j++)
		{
			printf("%d ",a[i][j]);
			sum=sum+a[i][j];
		}
	printf("\n");
	}
	average = sum/(row*column);
	printf("Sum of your array is : %.0f\n",sum);
	printf("Avreage of your array is :%.2f",average);
}