#include<stdio.h>
typedef struct Book
{
	char name[20];
	int id;
	char author[10];
	double price;
}Book;
void accept(Book* ptr);
void display(Book temp);
void main()
{
  Book bk1;
  	accept(&bk1);
  	display(bk1);
  }
void display(Book temp)
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
void accept(Book* ptr)
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