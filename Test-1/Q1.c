//convert the time enterd in hh,min and sec into total seconds.
#include<stdio.h>
void main()
{
	int h,min,sec,totalseconds;
	printf("enter the time in hours , minutes , seconds");
	scanf("%d%d%d",&h,&min,&sec);
	totalseconds=(h*3600)+(min * 60)+sec;
	printf("Total seconds = %d\n",totalseconds);
}