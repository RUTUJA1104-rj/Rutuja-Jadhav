//write a program to check whether a given year is leap year
#include<stdio.h>
void leapyear(int*);
void main()
{
	
	int year;
	leapyear(&year);
	}
	void leapyear(int*year)
	{
	if(*year%4==0 && *year%100!=0||  *year%400==0)
	{
		printf("leap year");
	}
	else
	{
		printf("not a leap year");
	}
}