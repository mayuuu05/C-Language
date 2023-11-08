//9. wap to make votter registration system.

#include<stdio.h>

main()
{
	int age;
	printf("Enter your Age :");
	scanf("%d",&age);
	
	if(age>=18)
	{
		if(age > 100)
		{
			printf(" Age is not valid ");
		}
		else
		{
		    printf("You are eilgeable for votting  ");
	    }
	}
	else if(age<18)
	{
		printf("You are  not  eilgeable for votting  ");
	}
}