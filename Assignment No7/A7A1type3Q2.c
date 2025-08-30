//write a program to check given 3 digit number is palindreome or not
#include<stdio.h>
void pallindrom(int*);
void main()
{
	int no=121;
	pallindrom(&no);
}

	void pallindrom(int*no)
	{
		int r1,r2,r3,rev;
	int q1;
	r1=*no%10;
	q1=*no%10;
	r2=q1%10;
	r3=q1%10;
	rev=r1*100+r2*10+r1;
	if(no==rev)
	{
		printf("number is pallindrom");
	}
	else
	{
		printf("number is not pallindrom");
	}
}