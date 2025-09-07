//3. printf last digit of number
//ex:223410
//o/p:10
#include<stdio.h>
void main()
{
	int num;
	printf("enter the number\n");
	scanf("%d",&num);
	int lastTwoDigit=num%100;
	printf("display last Two digit %d",lastTwoDigit);

}