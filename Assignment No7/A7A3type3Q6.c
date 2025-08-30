#include<stdio.h>
void alphabet(char*);
void main()
{
	char ch;
	alphabet(&ch);
}
void alphabet(char*ch)
{
	if(*ch>='a'&&*ch<='z')
	{
		printf("alphabet are uppercase");
	}
	else
	{
		printf("alphabet are lowercase");
	}
}