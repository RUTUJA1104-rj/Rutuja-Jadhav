#include<stdio.h>
void main()
{
	int start,end;
	int sum;
	printf("enter the starting number");
	scanf("%d",&start);
	printf("enter the ending number");
	while(start<=end)
	{
		sum+=start;
		start++;
		
	}
	printf("sum of number from %d is:%d\n",start,end,sum);
}