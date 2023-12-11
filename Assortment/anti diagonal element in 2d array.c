//10. Wap to find sum of anti diagonal element in 2d array.

#include<stdio.h>
 
main()
{
	int row,colum;
	int sum=0;

	printf("Enter the row number : ");
	scanf("%d",&row);
    printf("Enter the colum number : ");
	scanf("%d",&colum);
	
	int a[row][colum];
	int i,j=2;
	for(i=0;i<row;i++)
	{
		for(j=0;j<colum;j++)
		{
		    printf("a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	
	}
	
	printf("\narray is :\n");
	
//	for(i=0;i<row;i++)
//	{
//		for(j=0;j<colum;j++)
//		{
//		    printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
	  
	  printf("\ndiyagonal elements :\n");
	for(i=0;i<row;i++)
	{
		
	  printf("%d ",a[i][j]);
	  sum=sum+a[i][j];
	  j--;
		
	}
	printf(" sum is :%d",sum);
	
	

}