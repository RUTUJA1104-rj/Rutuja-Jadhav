//time(hour,min,sec)
#include<stdio.h>
typedef struct Time
{
int hr,min,sec;
}
Time;
 Time formateTime(Time t);
 Time storeTime();
 void display(Time t);
void main()
{
	Time t;
	t=storeTime();
	t=formateTime(t);
	display(t);
}
Time  formateTime(Time t)
{
	int min;
	t.sec=t.hr*3600+t.min*60+t.sec;
	t.hr=t.sec/3600;
	t.min=t.min/60;
	t.sec=min%60;
}
Time storeTime()
{
	Time temp;
	printf("enter hr min and sec");
	scanf("%d%d%d",temp.hr,temp.min,temp.sec);
	return temp;
	
}
void display(Time t)
{
	printf("%d %d %d",t.hr,t.min,t.sec);
}