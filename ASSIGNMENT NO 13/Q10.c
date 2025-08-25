//product (id,name,quantity,price)
#include<stdio.h>
#include<string.h>
struct product
{
	int id;
	char name[20];
	int quantity;
	float price;
	
};
void main()
{
	struct product p1,p2;
	p1.id=122;
	strcpy(p1.name,"book");
	fflush(stdin);
	p1.quantity=200;
	p1.price=70.0;
	printf("display the product details p1\n");
	printf(" P_ID = %d\n P_name = %s\n P_quantity = %d\n P_price = %f\n",p1.id,p1.name,p1.quantity,p1.price);
    	printf("display the product details p2\n");
		printf("P_ID = ");
		scanf("%d",&p2.id);
		printf("P_name = ");
		scanf("%s",&p2.name);
		printf("P_Quantity = ");
		scanf("%d",&p2.quantity);
		printf("P_price = ");
		scanf("%f",&p2.price);	
}