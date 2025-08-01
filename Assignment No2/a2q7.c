#include<stdio.h>
void main()
{
	int age=95;
	if(age<12)
	{
		printf("the person is child");
	}
	else
	{
		if(age>=12 && age<=19)
		{
			printf("the person is teenager");
		}
		else
		{
			if(age>=20&&age<=59)
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