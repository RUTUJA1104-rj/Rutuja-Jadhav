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
void displayproduct(struct product );
struct product storeproduct();
void main()
{
	struct product p1,p2,p3;
	
	printf("display the product details p1\n");
	p1=storeproduct();
    
	printf("display the product details p2\n");
	p2=storeproduct();
    	
    printf("enter the product details p3\n");
    p3=storeproduct();
    
    printf("enter the product deteils are\n");
    displayproduct(p1);
    displayproduct(p2);
    displayproduct(p3);
}
void displayproduct(struct product pdct)
{
	

		printf("P_ID = %d\n",pdct.id);
		
		printf("P_name = %s\n",pdct.name);
	
		printf("P_Quantity = %d\n",pdct.quantity);
		
		printf("P_price = %f\n",pdct.price);
		
	}


struct  product storeproduct()
{
	struct product temp;
scanf("%d",&temp.id);
scanf("%s",&temp.name);
scanf("%d",&temp.quantity);
scanf("%f",&temp.price);
}