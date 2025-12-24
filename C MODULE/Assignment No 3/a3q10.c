//A3Q10 find sum of first and last digit og given number
//input n=12345
//output:6(1+5)
#include<stdio.h>
void main()
{
	int n=12345,sum;
	int firstDigit,lastDigit;
	lastDigit=n%10;
	firstDigit=n;
	while(firstDigit>=10)
	{
		firstDigit/=10;
	}
	sum=firstDigit+lastDigit;
	printf("sum of first and last digit:%d\n",sum);
}