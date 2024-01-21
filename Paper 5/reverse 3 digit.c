#include<stdio.h>

main()
{

   int num,remainder;
   printf("Enter number :");
   scanf("%d",&num);
    int reversed_num = 0;
    while (num > 0)
    {
	
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num = num; // 10;
        
        printf("Reversed number:", reversed_num);
  
    }
}