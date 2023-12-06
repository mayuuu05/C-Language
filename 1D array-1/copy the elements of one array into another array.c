//6. Write a program in C to copy the elements of one array into another array.

#include <stdio.h>

main()
{
    int i, n;  
    int a[n],b[n];
    printf("Enter the size of array:");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Enter the value of a[%d]: ", i);
        scanf("%d", &a[i]); 
    }
    for (i = 0; i < n; i++)
    {
        b[i] = a[i]; 
    }
    for (i = 0; i < n; i++)
    {
    	printf("The copied elements of one array into another array are b[%d]:",i);
    	printf("%d\n ", b[i]);  
    	
    }
}
