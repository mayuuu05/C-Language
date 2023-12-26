//Q.1 Write a Program to find the cube of a given number using UDF.For example,
//Input:
//Enter any number: 5
//
//Output:
//Cube is: 125

#include<stdio.h>
#include<string.h>

int input()
{
	int num;
	printf("Enter your value :");
	scanf("%d",&num);
	return num;
}
int CubeOfGivenNum()
{
	int num=input();
	int CubeOfGivenNum=num*num*num;
	printf("Cube of a given number is : %d",CubeOfGivenNum);
}
main()
{
	CubeOfGivenNum();
}