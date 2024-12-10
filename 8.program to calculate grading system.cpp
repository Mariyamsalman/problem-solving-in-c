#include<stdio.h>
using namespace std;
int main()
{
	//8.program to calculate grading system
	float marks;
	printf("enter your marks:");
	scanf("%f",&marks);
	if(marks>=90)
	{
	printf("\nyour grade is:A+");
	}
	else if(marks>=70&&marks<=90)
	{
printf("\nyour grade is:A");
}
else if(marks>=50&&marks<=70)
{
	printf("\nyour grade is:B");
}

else{
	printf("\nyou are fail");
}
	return 0;
	}
