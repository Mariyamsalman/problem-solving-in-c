#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int a=4,b=6,disc;
	float roots1,roots2;
	printf("enter the disc");
	scanf("%d",&disc);
	if(disc>0){
	 roots1=(-b+(pow(disc,1/2)))/(2.0*a);
	 roots2=(-b-(pow(disc,1/2)))/(2.0*a);
	printf("%f %f",roots1 ,roots2);
	}else if(disc<0){
		roots1=(-b+(pow(-disc,1/2)))/(2.0*a);
	    roots2=(-b-(pow(disc,1/2)))/(2.0*a);
	    printf("%f %f",roots1 ,roots2);
	}else if(disc==0){
		roots1=-b/(2.0*a);
		roots2=-b/(2.0*a);
		 printf("%f %f",roots1 ,roots2);
	}else 
	{
		printf("invalid ");
	}
	return 0;
}
	
