//Calculating total salary based on based on basic.if basic<=5000 da,ta and hra
// will be 10%,20% & 25% respectievly otherwise da,ta  & hra will be 15% 25 %and 30% respectively
#include<stdio.h>
void salary(double*);
void main()
{
	
	double bs=8000;
	salary(&bs);
	}
    void salary(double*bs)
   {
    double da,ta,hray,ts,hr;
	if(bs<5000)
	{
		da=*bs*0.10;
		ta=*bs*0.15;
		hr=*bs*0.20;
	}
	else
	{
		da=*bs*0.15;
		ts=*bs+da+ta+hray;
		printf("ts=%lf",ts);
	}
}