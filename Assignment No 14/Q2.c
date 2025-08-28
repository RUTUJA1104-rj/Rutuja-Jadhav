//Employee(id,name,salary)
#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[10];
	double salary;
};
void displayemployee (struct employee);
struct employee storeemployee ();
void main()
{	
   struct employee e1,e2,e3;
      
	printf("enter the details of employee s1\n");
	e1=storeemployee();	
	
	printf("enter the details of employee s2\n");
	e2=storeemployee();
	
	printf("enter the details of employees3\n");
	e3=storeemployee();
    
	printf("enter the details of employee are \n");
      displayemployee(e1);
      displayemployee(e2);
      displayemployee(e3);
}
 void displayemployee (struct employee emp)
{
printf("ID = %d\n",emp.id);
printf("Name = %s\n",emp.name);
printf("Salary = %lf\n",emp.salary);
}
struct employee storeemployee ()
{
    struct employee temp;
	scanf("%d",&temp.id);
    scanf("%s",&temp.name);
    scanf("%lf",&temp.salary);
return temp; 
}




