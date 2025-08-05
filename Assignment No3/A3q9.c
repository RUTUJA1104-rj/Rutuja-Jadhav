//A3Q9  check the given number is palindrome number or not
//input:n=121
//output:palindrome
#include<stdio.h>
void main()
{
	int n,rev=0,rem=1;
	printf("enter the number");
	scanf("%d",&n);
	printf("hsf");
	int temp=n;
	while(temp>0)
	{
		printf("sjcb");
		rem=temp%10;
		rev=rev*10+rem;
		temp=temp/10;
		
	}
	if(temp==rev)
	{
		printf("%dis a polindrom%d\n");
		
	}
	else
	{
		printf("%dnumber is not polindrom%d\n");
	}
}