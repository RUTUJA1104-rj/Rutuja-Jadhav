//A3Q3  Sum of number in given range. find sun of number from start to end.
//input: strat=1,end=5
//output:15
#include<stdio.h>
void startend(int*,int*);
void main()
{
	int no=1;
	int sum=0;
	
	startend(&no,&sum);
		printf("sum =%d",sum);
	}
	void startend(int*no,int*sum)
	{
	while(*no<=5)
	{
		*sum=*sum+*no;
		(*no)++;
	}
	
}