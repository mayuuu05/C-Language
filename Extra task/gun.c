#include<stdio.h>
int pass()
{
	int gun_part1=30;
	return gun_part1;
}
int pass1()
{
	int gun_part2=30;
	return gun_part2;
}
int pass2()
{
	int gun_part3=30;
	return gun_part3;
}
int main_person(int gun_part1,int gun_part2,int gun_part3)
{
   
    int ans = gun_part1 + gun_part2 + gun_part3;
	return ans;
}
int rocky()
{
	int a=10;
	a = a + main_person(pass(),pass1(),pass2());
	return a;
}

int main()
{
	printf("Your Gun is ready for Fire !!!\n");
	printf("%d",rocky());
}