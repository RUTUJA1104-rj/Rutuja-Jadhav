//accept three sides side of a traingle from the user and determine wether the traingle is equilateral ,isosceles,or scalene
#include<stdio.h>
void traingle(int*,int*,int*);
void main()
    {
	int s1,s2,s3;
	traingle(&s1,&s2,&s3);
}
void traingle(int*s1,int*s2,int*s3)
{
	if(*s1==s2&&*s2==s3)
	{
		printf("equileteral traingle ");
	}
	else
	if(*s1==s2&&*s2==s3||*s1==s3)
	{
		printf("isosceles traingle");
	}
	else
	{
		printf("scalene traingle");
	}
}