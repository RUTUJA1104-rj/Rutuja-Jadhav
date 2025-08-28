#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="firstbitsolution";
	char str2[]="firstbit";
	int result;
	result=strdup(str1,str2);//compare 1st 4 character
	if(result==0)
	{
		printf("1st 4 character are equle\n");
	}
	else 
	{
		printf("character are not equle\n");
	}
	
}