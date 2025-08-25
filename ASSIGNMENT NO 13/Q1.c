//Student (rollno,name,marks)
#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	int marks;
};
void main()
{
	struct student s1,s2;
	s1.rno=1;
	strcpy(s1.name,"Rutuja");
	s1.marks=85;
	printf("display the student details s1\n");
	printf(" rno %d\n name %s\n marks %d\n",s1.rno,s1.name,s1.marks);
	
	printf("display the student details s2\n");
	printf(" rno ");
	scanf("%d",&s2.rno);
	printf(" name ");
	scanf("%s",&s2.name);
	fflush(stdin);
	
	printf(" marks ");
	scanf("%d",&s2.marks);
	
	
}