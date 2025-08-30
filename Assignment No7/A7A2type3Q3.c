//write a program to find greatest of three numbers using nested if-else
#include<stdio.h>
void greater(int*,int*,int*);
void main()
{
	int a=18,b=72,c=33;
	greater(&a,&b,&c);
}
void greater(int*a,int*b,int*c)
{
	if(a>b)
	{
		printf("a is greater");
	}
	else
	{
		
		if(b>c)
	{
		printf("b is greater");
	}
	else
	{
		if(c>a)
		{
			printf("c is greater");
		}
	}
}
}
