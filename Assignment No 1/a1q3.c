#include<stdio.h>
void main()
{
	int year;
	if(year%4==0 && year%100!=0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}