//Distence feet,inch
#include<stdio.h>
struct Distance
{
	float feet;
	float inch;
};
void main()
{
	struct Distance d1;
	d1.feet=6.9;
	d1.inch=2.5;
	
	printf(" d_feet = %f\n d_inch = %f\n",d1.feet,d1.inch);
	
}