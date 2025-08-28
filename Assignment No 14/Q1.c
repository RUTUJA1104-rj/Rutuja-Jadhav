//Student (rollno,name,marks)
#include<stdio.h>
#include<string.h>
struct student
{
	int rno;
	char name[10];
	int marks;
};
void displaystudent(struct  student std);
struct student storestudent ();
void main()
{	
   struct student s1,s2,s3;
      
	printf("enter the details of student s1\n");
	s1=storestudent();	
	printf("enter the details of student  s2\n");
	s2=storestudent();
	printf("enter the details of student s3\n");
	s3=storestudent();
    printf("enter the details of student are \n");
      displaystudent(s1);
      displaystudent(s2);
      displaystudent(s3);
}
 void displaystudent (struct student std)
{
printf("Rollno = %d",&std.rno);
printf("Name = %s",&std.name);
printf("Marks = %d",&std.marks);

}
struct student storestudent()
{
	struct student temp;
	scanf("%d",&temp.rno);
    scanf("%s",&temp.name);
    scanf("%d",&temp.marks);
 
}




