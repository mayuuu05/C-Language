//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.

#include<stdio.h>

main()
{
	
	int n1;
	printf("Enter your first array size : ");
	scanf("%d",&n1);
	int a[n1];
	int i;
	for(i=0 ; i<n1 ; i++)
	{
		printf("Enter the value a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	    printf("\n");
	    
	    
	int n2;
	printf("Enter your second array size : ");
	scanf("%d",&n2);
	int b[n2];
    int j;
	for(j=0 ; j<n2 ; j++)
	{
		printf("Enter the value b[%d]: ",j);
		scanf("%d",&b[j]);
	}
	int c[n1+n2];
	
	for(i=0;i<n1;i++)
      {
         c[i]=a[i];
	  }
	  for(i=0;i<n2;i++)
	  {
	  	c[n1+i]=b[i];
	  }
	  
	  printf("c[%d] :",n1+n2);
	  
	  for(i=0;i<n1+n2;i++)
	  {
	    printf(" %d",c[i]);
	  }
	
	
	
	
}