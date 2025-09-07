#include<stdio.h>
int mystrlen(char*);
void main()
{
	char str[]="firstbit";
	int len=mystrlen(str);
	printf("the length of string %d",len);
}
int mystrlen(char*ptr)
{
	int i=0;
	while(ptr[i]!='\0')
	{
		i++;
	}
	return i;
}