#include <stdio.h>
#include <string.h>
struct Product {
    int id;
    char name[50];
    float price;
    float dPrice;
};
struct Product products;
void addproduct();
void displayproduct();
void discountproduct();
int main() 
{
	int n;
    printf("Enter number of products: ");
    scanf("%d", &n);
    addproduct();
    discountproduct();
    displayproduct();
    return 0;
}
void display(products temp)
{
	Book arr[10];
	for(int i=0;i<10;i++)
	{
	printf("Name = %s\n",temp.name);
	printf("B_ID = %d\n",temp.id);
	printf("author = %s\n",temp.author);
	printf("Price = %lf\n",temp.price);
   }
}
void accept(Products* ptr)
{
	for(int i=0;i<10;i++)
	{
	printf("enter name id name Author price");
	scanf("%s",ptr->name);
	scanf("%d",&ptr->id);
	scanf("%s",ptr->author);
	scanf("%lf",&ptr->price);
 }
}