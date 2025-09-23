// Q2. Create a structure Time with data members as hrs, min, sec.
//Accept the values of all these members from user and display them.
// Also perform addition of two time variables and display the result. 
//  If sec goes beyond 60, carry it to min etc. 
//  Add a method to convert the given time into sec.
#include<stdio.h>
typedef struct Date
{
	int hrs;
	int min;
	int sec;
	
}Date;
Date add(Date d1, Date d2);
void  formate(Date a);
void display(Date t);
void store(Date *temp);
void main()
{
	Date dt,dt1,dt2;
	store(&dt);
	display(dt);
	Seconde(dt);
	Date add( dt1,dt2);
}


void display(Date t)
{
	printf("Time");
	printf("  : %d",t.hrs);
	printf("  : %d",t.min);
	printf("  : %d",t.sec);
}
void store(Date *temp)
{
	printf(" enter hrs min sec \n");
	scanf("%d",&temp->hrs);
	scanf("%d",&temp->min);
	scanf("%d",&temp->sec);
}
void  Seconde(Date a)
{ 
    
	a.sec=a.hrs*3600+a.min*60+a.sec;
}
Date add(Date d1, Date d2)
{
	Date result,min,sec;
	result.sec=d1.sec+d2.sec;
	result.min=d1.min+d2.min;
	result.sec/60;
	result.sec%60;
	result.hrs=d1.hrs+d2.hrs+result.min/60;
	result.min%60;
	return result;
}