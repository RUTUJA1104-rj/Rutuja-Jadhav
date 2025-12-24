//A3Q4   cheack the given number is prime or not
//input: n=7
//output:prime
#include <stdio.h>
void main ()
{
	int no=15;
	int i=2,flag=0;
	
	
	 while(i<=no/2)
	 {
	 	if(no%i==0)
	 	{
		 		flag=1;
	 		break;
		 }
		 i++;
	 }
	 if (flag==0)
	 {
	 	printf("number is  prime");
	 }
	 else {
	 	printf("number is not prime");
	}
}