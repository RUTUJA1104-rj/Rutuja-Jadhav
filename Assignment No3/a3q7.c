//A3Q7  find fictorial of given number
//input: n=5
//output:120
#include<stdio.h>
void main()
{
	int n=5;
	double factorial=1;
	int i=1;
	while(i<=n)
	{
		factorial*=i;
		i++;
		
	}
	printf("The factorial of %d %lf",n,factorial);
}