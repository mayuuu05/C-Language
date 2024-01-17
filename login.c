#include<stdio.h>
#include<string.h>

void mail()
{
		char mail[30];
	printf("\nCreate your Email : ");
    scanf("%s",&mail);
	
    char check_mail[10] = "moc.liamg@";
    
    
    int length= strlen(mail),index_increase=0,count=0;
    
	if(length >= 12)
	{
		for(int i=length; i<length-11; i--)
   		 {
    		if(mail[i]!=check_mail[index_increase++])
		    	{
	  			count=1;
			    }
	    }
	    
	    if(count == 0)
	    {
	    	for(int i=0; i<length; i++)
		    {
				if(mail[i]==' ')
		   		{
				 count=1;
		    	}
		    }
		    if(count == 0)
		    {
		    	printf("gmail successfully created");
		    }
			else
			{
				printf("Can't include space in gmail");
			}
		 }
		else
		{
			printf("Can't validate @gmail.com'");
		}
	}
	
	else
	{
		printf("Enter more than 12 words");
	}

}

void pass()
{
	char Pass[32];
	
	printf("Enter the password : ");
	scanf("%s",&Pass);
	int check = 0,
        uppercheck = 0,
	    lowercheck = 0,
	    digitcheck = 0,
		specialcheck = 0;
	
	int len = strlen(Pass);
	
	if(len >= 8)
	{
		for(int i = 0; i < len; i++)
		{
			if(Pass[i] >= 'A' && Pass[i] <= 'Z')
			{
				uppercheck = 1;
			}
		}
		if(uppercheck == 1)
		{
			for(int i = 0; i < len; i++)
			{
			if(Pass[i] >= 'a' && Pass[i] <= 'z')
				{
					lowercheck = 1;
				}
			}
			if(lowercheck  == 1)
			{
				for(int i = 0; i < len; i++)
				{
				if(Pass[i] >= '0' && Pass[i] <= '9')
					{
						digitcheck = 1;
					}
				}
				if(digitcheck == 1)
				{
					
						for(int i = 0; i < len; i++)
						{
							if(Pass[i] == '!' || Pass[i] == '@' ||Pass[i] == '#'||Pass[i] == '$'||Pass[i] == '%'||Pass[i] == '&'||Pass[i] == '*')
							{
								specialcheck = 1;
							}
						}
						if(specialcheck == 1)
						{
							printf("Password created successfull");
						}
						else
						{
							printf("Enter atleast one special char");
						}
					}
					else
					{
						printf("Enter atleast one num ");
						}	
			}
			else
			{
				printf("Enter atleast one lower  case char");
			}
			
		}
		else
		{
			printf("Enter atleast one upper case char");
		}
	}
	else
	{
		printf("Enter more than 8 charecter");
	}
}

main()
{
	pass();
	mail();
}

