#include<stdio.h>
void main()
{
	int num=23;
	if(num %3==0&&num%5!=0)
	{
		printf("Divisible by 3 but not by 5");
	}
	else
	{
		if(num%5==0&&num%3!=0)
		{
			printf("divisible by5 but not by both");
			
		}
		else
		{
			if(num%3==0&&num%5==0)
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