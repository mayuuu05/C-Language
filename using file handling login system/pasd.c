#include<stdio.h>
#include<string.h>
void mail()
{
	FILE *fp1;
	fp1=fopen("mail.txt","w");
	char gmail[11]="@gmail.com";
	char mail[100];
	start:
	printf("\n\nEnter your gmail :");
	fprintf(fp1,"Enter your gmail :");
	scanf("%s",&mail);
	fprintf(fp1,"%s",mail);
	
	int length = strlen(mail);
	int l= length-10;
	int ck=0;
	int i;
	if(length>=13 && length<=32)
	{
		int in=0;
		ck=1;
		for(i=l  ; i<length ; i++)
		{
		     if(gmail[in]==mail[i])
		     {
		     	ck++;
			 }
			 in++;
		}
		if(ck==11)
		{
			ck=0;
			for(i=0 ; i<l ; i++)
			{
				if(mail[i]>=32 && mail[i]<=47 || mail[i]>=58 && mail[i]<=64 || mail[i]>=91 && mail[i]<=96|| mail[i]>=123 && mail[i]<=126)
				{
					ck=1;
				}
			}
			if(ck==0)
			{
				for(i=0 ; i<l ; i++)
				{
					if(mail[i]>='A' && mail[i]<='Z')
					{
						ck=1;
					}
				}
				if(ck==0)
				{
					printf("your email created by successfully!!");
				}
				else
				{
					printf("capital latter not allowed");
				}
			}
			else
			{
				printf("special character not allowed !!");
			}
			
		}
		else
		{
			printf("Does not perfect @gmail.com sequance !!");
		}
	}
	else
	{
		printf("enter required characters !!");
	}
}

void pass()
{
	FILE *fp2;
	fp2=fopen("pass.txt","w");
	char pass[32];
	start:
	printf("\n\nEnter your password :");
	fprintf(fp2,"Enter your password :");
	scanf("%s",&pass);
	fprintf(fp2,"%s",pass);
	
	int length = strlen(pass);
	
	int upperck=0,
	    lowerck=0,
	    digitck=0,
	    specialck=0;
	    
    int i;
	if(length>=8 && length<=32)
	{
		for(i=0 ; i<length ; i++)
		{
			if(pass[i]>='A' && pass[i]<='Z')
			{
				upperck=1;
			}
		}
		if(upperck==1)
		{
			for(i=0 ; i<length ; i++)
			{
				if(pass[i]>='a' && pass[i]<='z')
				{
					lowerck=1;
				}
			}
	
		if(lowerck==1)
		{
			for(i=0 ; i<length ; i++)
			{
				if(pass[i]>='0' && pass[i]<='9')
				{
					digitck=1;
				}
			}
			if(digitck==1)
			{
				for(i=0 ; i<length ; i++)
				{
					if(pass[i]>=33 && pass[i]<=64 || pass[i]>=91 && pass[i]<=96 || pass[i]>=123 && pass[i]<=126 )
					{
						specialck=1;
					}
				}
				if(specialck==1)
				{
					printf("Your password created successfully!");
				}
				else
				{
					printf("Enter atlest one special character !");
					goto start;
				}
		    }
			else
			{
				printf("Enter atlest one digit !");
				goto start;
			}
		}
		 else
		 {
			printf("Enter atlest one lowercasw character !");
			goto start;
		 }
		}
		else
	    {
	    	printf("Enter atlest one uppercase character !");
			goto start;
		}
	}
	else
	{
		printf("Enter more than 8 characters !");
		goto start;
	}	    
}
main()
{
	mail();
	pass();
}