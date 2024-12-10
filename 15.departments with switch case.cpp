#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	//15.departments
	int num1,num2;
	printf("enter number 1 if you want to visit school of comp science,2 for school of buisness,3 for engineering");
	scanf("%d",&num1);
	switch(num1){
		case 1:
			printf("1.school of comp science");
			printf("\nenter 3 to visit further departments");
			scanf("%d",&num2);
			switch(num2){
			case 3:
			printf("\n1.department of informatics\n2.department of machine learning");
			break;
			default :
				printf("invalid");
			}
			break;
			case 2:
				printf("1.school of buisness");
					printf("\nenter 3 to visit further departments");
			scanf("%d",&num2);
			switch(num2){
			case 3:
				printf("\n1.department of commerce\n2.department of purchasing");
			break;
			default :
				printf("invalid");
			}
			break;
			case 3:
					printf("1.school of engineering");
					printf("\nenter 3 to visit further more departments");
					switch(num2){
			case 3:
		printf("\n1.department of mechanical engineering\n2.department of metachronic");
			break;
			default :
				printf("invalid");
			}
			break;
			default :
				printf("invalid");
			}
	return 0;	
	}
	
