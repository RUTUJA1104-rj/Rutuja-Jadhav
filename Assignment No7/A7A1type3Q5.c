//write a program to check whether a person is eligible to vote(age>=18)
#include<stdio.h>
void eligible(int*);
void main()
{
	int age=23;
	eligible(&age);
}
void eligible(int*age)
{
	if(age>18)
	{
		printf("eligible for vote");
	}
	else
	{
		printf("not eligible");
	}
}