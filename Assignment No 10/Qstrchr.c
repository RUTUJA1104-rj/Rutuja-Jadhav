#include<stdio.h>
int mystrchr(char*,char);
void main()
{
char str[]="firstbit";

	char*res=mystrchr(str,'b');
	if(res!=0)
	printf("char found %d index",res-str);
	else
	printf("char not found");
}
mystrchr(char*ptr ,char ch)
{
	int i=0;
	while(ptr[i]!='\0')
	{
		if(ptr[i]==ch)
		return&ptr[i];
	}
	return '\0';

}