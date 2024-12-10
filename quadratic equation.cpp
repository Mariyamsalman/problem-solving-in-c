#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{ 
//quadratic equation
float a=8.4,b=16.4,c,ans1,ans2;
printf("enter the value of c:");
scanf("%f",&c);
ans1=(-b+sqrt((b*b)-(4*a*c)))/((a/b*b)+(b/c*c));
ans2=(-b-sqrt((b*b)-(4*a*c)))/((a/b*b)+(b/c*c));
printf("\n%f",ans1);
printf("\n%f",ans2);
return 0;
}
