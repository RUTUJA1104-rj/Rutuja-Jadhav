#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="firstbit";
	char str2[10];
	printf("after string %s\n",str1,str2);
	strset(str1,str2);
	printf("before string %s\n",str1,str2);
}