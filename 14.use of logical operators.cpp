#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	//14.use of logical operators
	int a=2,b=4;
	if(a!=b&&b!=a||b!=a&&a!=b)
	{
		printf("they are not equal");
	}
	return 0;
}
