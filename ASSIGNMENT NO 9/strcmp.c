#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="first";
	char str2[]="bit";
	int cmp=strcmp(str1,str2);
	if(cmp>0)
	{
		printf("greater %s",str1,str2);
	}
	else if(cmp<0)
	{
		printf("less tha %s",str1,str2);
	}
}