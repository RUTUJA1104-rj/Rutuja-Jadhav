//A3Q5   check the given number is Armstrong number or not
//input n=153
//output:Armstrong
#include<stdio.h>
void main()
{
	int no=153,r,sum=0;
	int temp=no;
	while(temp!=0)
	{
	r=temp%10;
	sum=sum+r*r*r;
	temp=temp/10;
	}
	if(sum==no)
	{
		printf("number is armstrong");
		
	}
	else
	{
		printf("number is not armstrong");
	}
}