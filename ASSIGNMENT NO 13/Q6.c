//Date(date,month,year)
#include<stdio.h>
struct Date
{
	int date;
	int month;
	int year;
};
void main()
{
	struct Date d1;
	d1.date=11;
	d1.month=04;
	d1.year=2004;
	printf(" date = %d-%d-%d\n",d1.date,d1.month,d1.year);
	
		}