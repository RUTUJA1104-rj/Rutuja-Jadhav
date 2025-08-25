//time(hour,min,sec)
#include<stdio.h>
struct time
{
	int hour;
	int min;
	int sec;
};
void main()
{
	struct time t1;
	t1.hour=1;
	t1.min=30;
	t1.sec=46;
	printf("time %d.%d.%d",t1.hour,t1.min,t1.sec);
}
