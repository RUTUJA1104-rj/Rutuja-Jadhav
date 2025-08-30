//A3Q9  check the given number is palindrome number or not
//input:n=121
//output:palindrome
#include<stdio.h>
void palindrome(int*,int*,int*,int*);
void main()
{
	int n,rev=0,rem=1;
	printf("enter the number");
	scanf("%d",&n);
	
	int temp=n;
	palindrome(&n,&rev,&rem,&temp);
	if(temp==rev)
	{
		printf("%dis a polindrom%d\n");
		
	}
	else
	{
		printf("%dnumber is not polindrom%d\n");
	}
}
void palindrome(int*n,int*rev,int*rem,int*temp)
	{
	while(temp>0)
	{
		
		*rem=*temp%10;
		*rev=*rev*10+*rem;
		*temp=*temp/10;
		
	}
}