//find odd and even among the number
#include<stdio.h>
void main()
{
	int arr[5],i,sum;
	for(i=0;i<5;i++)
	
	{ printf ("enter the value");
		scanf("%d",&arr[i]);
		
		printf("\n");
    }
    printf("even number in array\n");
    for(i=0;i<5;i++)
    {
    if(arr[i]%2==0)//even number
    {
    	printf("%d",arr[i]);
	}
     printf("\n");
 }
    printf("odd number in array\n");
       for(i=0;i<5;i++)
      {    
	    if(arr[i]%2!=0)//odd number
	     {
		   printf("%d",arr[i]);
	      }
	  printf("\n");
	  }
	  
}
