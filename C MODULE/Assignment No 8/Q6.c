//print only prime numbers of array
#include<stdio.h>
int main()
{
	int n,flag=1;
	
	printf("enter the array of size:");
	scanf("%d",&n);
	int arr[n],j;
	for (int i=1; i<n; i++)
	{
	scanf("%d", &arr[i]);
				 int num = arr[i];
		flag = 0;
		
	
		if(num%2==0)
		{
			flag=1;
			break;
		}
					
	
	if(flag==1){
			printf("%d is prime \n",num);
		}
	}
}	