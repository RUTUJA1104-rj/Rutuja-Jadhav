//A7A2Q5.] Acceprt the price from user ask the user if he is a student (user may say y or n) if the
//student & he  has purchased more than 500 than discount is 20% otherwise discount is 10%. 
//but if he is not a student then if he has purchased more than 600 discount is 15% otherwise 
//there is not discount
#include<stdio.h>
void student(char*,double*,double*);
void main()
{
	char isstudent='y';
	double price=7000;
    long totalprice;
	student(&isstudent,&price,&totalprice);
}
void student(char*isstudent,double*price,double*totalprice)
{
	if(isstudent=='y')
	{
		if(*price>500)
		totalprice=price-price(*0.20);
		else
		totalprice=price-price*0.10;
	}
	else
	{
		if(price>500)
		*totalprice=*price-price*0.20;
		else
		totalprice=*price;
	}
	printf("the final price of coustemer is %lf",totalprice);
}