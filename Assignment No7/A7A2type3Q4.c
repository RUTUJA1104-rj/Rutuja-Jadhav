//ask the user to enter mark
//then show the result based on these rule

#include<stdio.h>
void mark(int*);
void main()
{
	
	int m=70;
	mark(&m);
}
void mark(int*m)
{
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