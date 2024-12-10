#include<iostream>
using namespace std;
int main()
{
	int i=5;
	while(i>=1){
		int j=i;
		while(j>=1){
			cout<<i;
			j--;
		}
		cout<<"\n";
		i--;
	}
	return 0;
}
