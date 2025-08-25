//Admin(id,name,salary,allowance)
#include<stdio.h>
#include<string.h>
struct admin
{
	int id;
	char name[10];
	double salary;
	double allowance;
};
void main()
{
	struct admin a1,a2;
	a1.id=101;
	strcpy(a1.name,"Riya");
	a1.salary=850000;
	a1.allowance=450000;
	printf("display the 1 Admin details\n");
	
	printf(" A_ID = %d\n A_Name = %s\n A_salary = %lf\n A_allowance = %lf\n",a1.id,a1.name,a1.salary,a1.allowance);
   
   printf("display the 1 Admin details\n");
   printf(" A_ID = ");
   scanf("%d",&a1.id);
   printf(" A_Name = ");
   scanf("%s",&a1.name);
   printf(" A_Salary = ");
   scanf("%lf",&a1.salary);
   printf(" A_aAllowance = ");
   scanf("%lf",&a1.allowance);
}