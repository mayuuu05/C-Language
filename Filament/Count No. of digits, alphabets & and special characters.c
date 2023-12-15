//3. Count No. of digits, alphabets & and special characters.

#include<stdio.h>
#include<string.h>
main()
{

  char a[20];
  printf("Enter the string:");
  scanf("%s",&a);
  
  int digits=0;
  int alphabets=0;
  int special=0;
  
  int i;
  for(i=0;a[i];i++)

  {
  	
	if(a[i]>='1' && a[i]<='9')
	{
	  digits++;	
	}
	else if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=122)
	
	{
	 alphabets++;
	}
	else 
	
	{
	special++;
	}
	
  }
  printf("Count No.of digits is :%d\n",digits);
  printf("Count No.of alphabets is :%d\n", alphabets);
  printf("Count No.of special characters is : %d\n",special);
   
}