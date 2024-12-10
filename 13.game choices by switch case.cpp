#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	//13.game choices by switch case
	int num1,num2;
	printf("press 1  to start the game or 2 if want to exit the game:");
	scanf("%d",&num1);
	switch(num1){
		case 1:
			printf("enter 3 or 4 if you want to play single or multi player:");
			scanf("%d",&num2);
			switch(num2){
				case 3:
					printf("you are in a single player game");
					break;
					case 4:
						printf("you are in a multiplayer game");
						break;
						default:
							printf("invalid number");
			}
			break;
			case 2:
				printf("you are out of the game");
				default :
					printf("invalid number");
	}
	return 0;
}
	
