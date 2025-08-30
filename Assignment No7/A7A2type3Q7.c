//Accept the age and check if the person is: Child(age<12),Teenager(12-19),Adult(20-59),senior(60 annd above)
#include<stdio.h>
void ageperson(int*);
void main()
{
	int age=95;
	ageperson(&age);
}
void ageperson(int*age)
{
	if(*age<12)
	{
		printf("the person is child");
	}
	else
	{
		if(*age>=12 && *age<=19)
		{
			printf("the person is teenager");
		}
		else
		{
			if(*age>=20 && *age<=59)
			{
				printf("the person is adult");
			}
			else
			{
				printf("the person is sinior");
			}
		}
	}
	
}