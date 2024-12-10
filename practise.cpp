#include<iostream>
using namespace std;
int main()
{
	int units;
	float bill;
	cout<<"enter the number of units consumed:";
	cin>>units;
	if(units>=100)
	{ 
	bill+=1/units;
	}else if(units>=200){
	bill+=2/units;
	}else if(units>=300){
	 bill+=3/units;
	}
	cout<<bill;
	return 0;
}
