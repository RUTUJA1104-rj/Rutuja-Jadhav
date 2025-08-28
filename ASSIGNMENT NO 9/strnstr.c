#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="first bit solution";
	char str2[]="bit";
	int res; 
	res=strstr(str1,str2);
	if(res!=NULL)
	{
		printf("find 1st string %s\n",res);
	}
	else
	{
		printf("another string find %s\n",res);
	}
	}