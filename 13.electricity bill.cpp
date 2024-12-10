#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	//13.electricity bill
	int a,b,units;
	printf("enter your previous and current reading");
	scanf(" %d %d",&a,&b);
	units=(a+b)/2;
	if(units>=300)
	{
		printf("the cost of per unit is rs.4 and there will be 3 percent deduction");
	}else if(units>=301&&units<=400)
	{
		printf("the cost of per unit is rs.6 ");
	}else if(units>=400){
		printf("the cost of per unit is rs.7 and there will be 4 percent of surcharge");
	}else {
		printf("invalid");
	}
	return 0;
}
	
