//Accept a number  and check if it id divisible by 3,5,or both(print "divisible by 3 but not by 5"or
//"Divisible by 5 but not by 3" or"Divisible by both " or "divisible by None")
#include<stdio.h>
void divisible(int*);
void main()
{
	int num=23;
	divisible(&num);
}
void divisible(int*num)
{
	if(*num%3==0&&*num%5!=0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else
	{
		if(*num%5==0&&*num%3!=0)
		{
			printf("divisible by5 but not by both");
			
		}
		else
		{
			if(*num%3==0&&*num%5==0)
			{
				printf("divisible by both");
			}
			else
			{
				printf("divisible by None");
			}
		}
	}
}