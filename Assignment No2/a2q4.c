#include<stdio.h>
void main()
{
	int m=70;
	if(m>75)
	{
		printf("Distincation");
	}
	else
	{
		if(m>65)
		{
			printf("first class");
		}
		else
		{
			if(m>55)
			{
				printf("Seconde class");
			}
			else
			{
				if(m>40)
				{
					printf("pass");
				}
				else
				{
					printf("Fail");
				}
			}
		}
	}
}