//Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
//For example,
//Input:
//Enter array's size: 2
//
//Enter array elements:
//a[0][0] = 3
//a[0][1] = 2
//a[1][0] = 5
//a[1][1] = 4
//
//Output:
//Cubes of all elements:
//9   4
//25 64

void cube()
{
	int row,column;
	printf("Enter your array row size : ");
	scanf("%d",&row);
    printf("Enter your array column size : ");
	scanf("%d",&column);
	
	printf("\n");
	int a[row][column];
	
    int i,j;
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
		    printf("Enter array element of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	
	printf("\nCubes of all elements :\n");
	for(i=0 ; i<row ; i++)
	{
		for(j=0 ; j<column ; j++)
		{
		    int *ptr = &a[i][j];
		    int cube_of_elements = *ptr * *ptr * *ptr;
	        printf("=> %d\n",cube_of_elements);
		}
	}
	
}
main()
{
	cube();
}