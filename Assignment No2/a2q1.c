#include<stdio.h>
void main()
{
	char op ;
	
	double num1,num2,result;
	printf("enter the 1st number");
	scanf("%d",&num1);
	printf("enter the opreators(=,-,/,*)");
	scanf("%d",&op);
	printf("enter the seconde number");
	scanf("%d",&num2);
			if(op=='+')
	           {
            	result=num1+num2;
	            printf("result %lf",result);	
	           }
	else
	{
		if(op=='-')
		{
			result=num1-num2;
			printf("result %lf",result);
		}
		else
		{
			if(op=='/')
			if(num2!=0)
			{
				result=num1/num2;
				printf("result %lf",result);
			}
			else
			{
				if(op=='*')
				{
					if(num2!=0)
					result=num1*num2;
					printf("result %lf",result);
				}
				else
				{
				
					
						printf("error zero not allowed ");
					}
					
				}
				printf("envalid operator enterd");
			
				}
			}
		}
	
