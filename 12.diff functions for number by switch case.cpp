#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	//12.diff functions for number by switch case
	int num;
	float ans;
	printf("enter a number between 1 to 4");
	scanf("%d",&num);
	switch(num){
		case 1:
			ans=sqrt(num);
			printf("%f",ans);
			break;
			case 2:
				ans=num*num*num;
				printf("%f",num);
				break;
				case 3:
					for(int i=1;i<=50;i++){
						printf("%d",num);
						break;
					}
					case 4:
						for(int i=1;i<=10;i++){
							printf("%d * %d = %d",num,i,num*i);
							break;
						}
				default :
					printf("invalid choice");
		}
		return 0;
		
	}
