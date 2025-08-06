//Q1  1-50 unit -30rs/unit,for 51-150units -40rs/unit,for 151 and above unis 50r /unit
#include<stdio.h>
void main()
{
	int unit=155,rs,bill;
	if(unit>1&&unit<=50)
		bill=unit*30;
		else
		if(unit>51&&unit<150)
			bill=unit*40;
			else
			if(unit>151)
		     bill=unit*50;
			printf("%d",bill);
}