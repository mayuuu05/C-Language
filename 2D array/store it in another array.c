//Q.2 Write a Program to perform the addition operation of two 2D arrays & store it in another array. Keep in mind that both array sizes must be the same.
//For example,
//Input:
//Enter the array's row size: 3
//Enter the array's column size: 3
//
//Enter array A's elements:
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
//Enter array B's elements:
//b[0][0] = 3
//b[0][1] = 6
//b[0][2] = 2
//b[1][0] = 5
//b[1][1] = 6
//b[1][2] = 8
//b[2][0] = 3
//b[2][1] = 7
//b[2][2] = 4
//
//Output:
//Array C is:
//5   10  3
//8   11 12
//11  9  10 

#include<stdio.h>
 
main()
{
	int row,colum;

	printf("Enter the row number : ");
	scanf("%d",&row);
    printf("Enter the colum number : ");
	scanf("%d",&colum);
	
	int a[row][colum];
	int b[row][colum];
	int c[row][colum];
	int i,j;
	printf("Elements of A :\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
		printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	
		printf("\n");
		printf("Elements of B : \n ");
		for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
		printf("b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	
	}
		for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
			 c[i][j]=a[i][j]+b[i][j];
		printf(" %d  ", c[i][j]);
		
		}
		printf("\n");
	
	}
	

}