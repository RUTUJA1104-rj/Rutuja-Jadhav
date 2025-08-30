//A3Q8]  check the given number is strong number or not
//input:n=145
//output:Strong
#include<stdio.h>
void strong(int*,int*,int*,int*,int*,int*);
void main()
{
	int num=145,sum=0,r,i,fact;
	int temp=num;
	strong(&num,&sum,&r,&i,&fact,&temp);
	if(sum==num)
	{
		printf("Number is Strong");
	}
	else
	{
	printf("number is not Strong");
    }
}
     void strong(int*num,int*sum,int*r,int*i,int*fact,int*temp)
   {
	    while(temp!=0)
	    {
	    	*fact=1;
		    *r=*temp%10;
		    for(*i=1;*i<=*r;*i++)
		    {
		        *fact=*fact * *i;
		    }
		    *sum=*sum+*fact;
		     *temp=*temp/10;
	    }
    }