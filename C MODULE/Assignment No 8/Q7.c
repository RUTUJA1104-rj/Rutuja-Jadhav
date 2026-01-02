//Take two array and add sum in third array  
#include<stdio.h>
void main()
{
	int arr[5],brr[5],crr[5],i,sum;
	for(i=0;i<5;i++)
	
	{ printf("enter the 1st array element");
	printf("\n");
		scanf("%d",&arr[i]);
		}
		printf("\n");
	for(i=0;i<5;i++)
	{
		printf("enter the 2nd array element\n");
	scanf("%d",&brr[i]);
	}	printf("\n");
	for(int i=0;i<5;i++)
	{
		printf("enter the 3rd array element\n");
		scanf("%d",&crr[i]);
	}printf("\n");
     printf("sum of  array:");
     for(i=0;i<5;i++)
     {
       sum=arr[i]+brr[i]+crr[i];
     
        printf("%d\n",sum);
}
}