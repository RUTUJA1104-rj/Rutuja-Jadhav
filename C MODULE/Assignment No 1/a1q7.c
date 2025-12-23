#include<stdio.h>
void main()
{
	double bs=8000;
	double da,ta,hray,ts,hr;
	if(bs<5000)
	{
		da=bs*0.10;
		ta=bs*0.15;
		hr=bs*0.20;
	}
	else
	{
		da=bs*0.15;
		ts=bs+da+ta+hray;
		printf("ts=%lf",ts);
	}
}