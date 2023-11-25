 //7. wap to check number is palindrom or not
 
 #include<stdio.h>
main()
{
	int n;
	int y,palindrom=0,x;
	
	printf("Enter your number : ");
	scanf("%d",&n);
	x=n;
	for( n ; n>0 ; n/=10)
	{
		y = n % 10;
		palindrom= y + (palindrom*10);
		
	}
	
	if(palindrom == x)
	{
		printf("yes your number is palindrom");
	}
	else
	{
		printf("no your number is not palindrom");
	}
 		
}