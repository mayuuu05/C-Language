//q4. wap to change value by passing address of variable in udf.

#include<stdio.h>


void hacker(int *otp)
{
	*otp = *otp - 999;
}
main()
{
	int bank_balance;
	printf("Your current Bankbalance :");
	scanf("%d",&bank_balance);//supose amount is 1000
	
	int *otp = &bank_balance;
	hacker(otp);
	
	
	printf("\nNow your Bankbalance is :\n");
	printf("Amount = only %d rupees!!!",bank_balance);//current balance is 1 
}