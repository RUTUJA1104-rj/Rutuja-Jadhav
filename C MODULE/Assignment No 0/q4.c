#include<stdio.h>
void main()
{
	int a=15;
	int b=10;
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("a=%d b=%d",a,b);
}