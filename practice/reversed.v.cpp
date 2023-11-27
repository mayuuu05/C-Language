
#include<stdio.h>

main()
{

   int num,remainder;
    int reversed_num = 0;
    while (num > 0)
    {
	
        remainder = num % 10;
        reversed_num = (reversed_num * 10) + remainder;
        num = num; // 10;
    return reversed_num;
    }
}
//# Example usage:
//number = int(input("Enter a number to reverse: "))
//reversed_number = reverse_number(number)
//print("Reversed number:", reversed_number)