//write a program to check whether a given character is a vowel or consonant
#include<stdio.h>
void  vowelcons(char*);
void main()
{
	char ch='a';
	vowelcons(&ch);
}
    void vowelcons(char*ch)
    {
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
	{
		printf("charchter is vowel");
	}
	else
	{
		printf("charchter is consonant");
	}
}