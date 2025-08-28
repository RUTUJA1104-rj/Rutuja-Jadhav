//date(day,month,year)
#include <stdio.h>
struct Date {
    int day;
    int month;
    int year;
};
void displayDate(struct Date ) ;
struct Date storeDate() ;
int main() 
{
    struct Date d1,d2;
 printf("enter the date1\n");
    d1=storeDate();  
	printf("enter the date 2\n");
	d1=storeDate();  
	printf("enter the date are\n");
    displayDate(d1);     
    displayDate(d2);
}
struct Date storeDate() 
{
	struct Date d;
    scanf("%d",&d.day);
    scanf("%d",&d.month);
    scanf("%d",&d.year);
    return d;
}
void displayDate(struct Date d) 
{
    printf("date = %d:%d:%d:",d.day,d.month,d.year);
   
    
}

