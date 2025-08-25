//Employee(id,name,salary)
#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[10];
	double salary;
};
void main()
{
 struct employee e1,e2;

 e1.id=10;
 strcpy(e1.name,"shubham");
 e1.salary=500000;
 printf("display the 1st employee details\n");
 printf(" E_id = %d\n E_name = %s\n E_salary = %lf\n",e1.id,e1.name,e1.salary);
 
 printf("display the 2st employee details\n");
 
 printf("E_ID =");
 scanf("%d",&e2.id);
 printf("E_Name =");
 scanf("%s",&e2.name);
 printf("E_Salary =");
 scanf("%lf",&e2.salary);
}
