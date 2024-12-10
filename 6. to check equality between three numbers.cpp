#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	//6. to check equality between three numbers
	int num1,num2,num3;
	printf("enter 3 numbers to know if they are equal or not:");
scanf("%d %d %d",&num1,&num2,&num3);
	if(num1==num2&&num1==num3){
		printf("all numbers are equal");
	}else
	{
		printf("\nall numbers are not equal");
	}
	
	
	return 0;
}

