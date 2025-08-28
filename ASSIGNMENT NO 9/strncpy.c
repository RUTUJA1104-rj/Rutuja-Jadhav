//strncpy
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[]="Hello";
	char str2[]="Hello word";
  strncpy(str1,str2,5);//strncpy
    printf(" %s\n",str1,str2);
}