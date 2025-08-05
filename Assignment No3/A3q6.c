//A3Q6  check the given number is perfect number or not
//input:n=28
//output:perfect
#include<Stdio.h>
void main ()
{
	int num=28,sum=0;
	int i;
	for(i=1;i<num;i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
		
	}
	if(sum==num)
	{
		printf("perfect Number");
	}
	else
	{
		printf("not perfect Number");
	}
}