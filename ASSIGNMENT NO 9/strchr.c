#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="rutuja";
	char str2[]="Rutuja";
	if(stricmp(str1,str2)==0)
	{
		printf("str 1 and str2 equivalent %s and %s",str1,str2);
	}
    else
    {
    	printf("str 1 and str2 are not equivalent %s and %s",str1,str2);
	}
	
	
}