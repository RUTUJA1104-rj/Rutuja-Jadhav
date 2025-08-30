//print table for given number
//input:n=5
//output:5 10 15 20 25 30 35 40 45 50
#include<stdio.h>
void table(int*);
void main()
{
	int n;
	table(&n);
}
void table(int*n)
{
	
	int i=1;
	while(i<=10)
	{
		printf("%d\n",i*5);
		i++;
	}
}