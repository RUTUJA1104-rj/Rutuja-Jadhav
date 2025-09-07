//write a program to check if the year is leap or not
#include<stdio.h>
void main()
{
	int year;
	printf("enter the year\n");
	scanf("%d",&year);
	if(year%4==0 && year%100!=0 || year%400==0)
	{
		printf("leap year \n");
	}
	else
	{
		printf("not a leap year\n");
	}
}