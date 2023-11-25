// 4. wap to reverse number of given number.


#include<stdio.h>

main()
{
    int n;
    int num=0,reverse;
    printf("Enter the value : ");
    scanf("%d",&n);
	
	while(num>0)
	{
		n = num % 10;
        reverse = (reverse * 10) + n;
        
		
		printf("%d",reverse);
		
	}
}