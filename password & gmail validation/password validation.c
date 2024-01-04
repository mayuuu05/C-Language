#include<stdio.h>
#include<string.h>

main()
{
	char pass[32];
	printf("Enter your password : ");
	scanf("%s",&pass);
	
	int length = strlen(pass);
	int i;
	int uppercheck = 0,
	    lowercheck = 0,
	    digitcheck = 0,
		specialcheck = 0;
		
	if(length>=8 && length<=32)
	{
		for(i=0 ; i<length ; i++)
		{
			//for upper case character check
			if(pass[i]>='A' && pass[i]<='Z')
			{
					uppercheck = 1;
			}
		}
		if(uppercheck == 1)
		{
			for(i=0 ; i<length ; i++)
		    {
		    	//for lower case character check
			    if(pass[i]>='a' && pass[i]<='z')
			    {
					lowercheck = 1;
		    	}
	     	}
	     	if(lowercheck==1)
	     	{
	     		for(i=0 ; i<length ; i++)
		        {
		    	    //for digit check
			        if(pass[i]>='0' && pass[i]<='9')
			        {
					    digitcheck = 1;
		    	    }
	     	    }
	     	        if(digitcheck==1)
	     	        {
	     	        		for(i=0 ; i<length ; i++)
		                    {
		    	                //for digit check
			                    if(pass[i]>=33 && pass[i]<=64 || pass[i]>=91 && pass[i]<=96 || pass[i]>=123 && pass[i]<=126 )
			                    {
					               	specialcheck = 1;
		    	                }
	     	                }
	     	                if(specialcheck==1)
	     	                {
	     	                	printf("Your password created successfully !!!");
							}
							else
							{
								printf("Enter atleast one special char");
							}
					}
				
				 else
				 {
				 	printf("Enter atleast one digit!!");
				 }
			}
			else
			{
				printf("Enter atleast one lower case character!!");
			}
		}
		else
		{
			printf("Enter atleast one upper case character!!");
		}
    }
	else
	{
		printf("Enter more then 8 characters !!");
	}
	
}