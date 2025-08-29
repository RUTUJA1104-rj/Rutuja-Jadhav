#include<stdio.h>
typedef struct student
{
	int rno;
	char name[];
	
	
}student;
void main()
{
	student july[5];
	student aug[6];
	student sep[10];
	printf("enter the july student");
	 for(int i=0;i<5;i++)
	 {
	 	scanf("rno = %d",&july[i].rno);
	 	scanf("name = %d",&july[i].name);
	 }
	 printf("enter the aug student");
	 for(int i=0;i<6;i++)
	 {
	 	scanf("rno = %d",&aug[i].rno);
	 	scanf("name = %d",&aug[i].name);
	 }
	 printf("enter the sep student");
	 for(int i=0;i<10;i++)
	 {
	 	scanf("rno = %d",&sep[i].rno);
	 	scanf("name = %d",&sep[i].name);
	 }
	 for(int i=0;i<5;i++)
	 {
	 printf("rno = %d mane = %s",)
	 
	 
}