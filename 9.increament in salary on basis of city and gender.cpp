#include<stdio.h>
using namespace std;
int main()
{
	//9.increament in salary on basis of city and gender
char ch,ch1;
int age,net_salary=30000;
printf("enter your gender by typing F or M and enter your age ");
scanf("%c %d",&ch,&age);
printf("enter your city  by entering K,G,H or S if you belong to karachi ,ghotki,hyderabad or sukkur:");
scanf(" %c",&ch1);
if(ch=='F'&&age>=25||age<=35&&ch1=='K'||ch1=='H'){
	net_salary+=2000;
	printf("your net salary is %d",net_salary);
}else if(ch=='M'&&age>=25||age<=40&&ch1=='S'||ch1=='G'){
net_salary+=2500;
printf("your net salary is %d",net_salary);
}else
{
printf("your net salary is %d",net_salary);	
}
return 0;
}
