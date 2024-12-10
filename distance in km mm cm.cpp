#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{ 
//distance in km,m,cm,mm,mm
float distance,km,m,cm,millimeter,micrometer;
printf("\nenter distance of shu in miles from your home:");
scanf("%f",&distance);
km=distance*1.6;//formulas
printf("\nthe distance in km is :%f",km);
m=km*1000;
printf("\nthe distance in m is :%f",m);
cm=m*100;
printf("\nthe distance in cm is :%f",cm);
millimeter=10*cm;
printf("\nthe distance in millimeter is :%f",millimeter);
micrometer=1000*millimeter;
printf("\nthe distance in cm is :%f",micrometer);
return 0;
}
