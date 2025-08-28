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
void displayadmin(struct admin );
struct admin storeadmin();
void main()
{
	struct admin a1,a2,a3,a4;
	printf("enter the 1 Admin details\n");
	a1=storeadmin();
	printf("enter the 2 admin details\n");
	a2=storeadmin();
	printf("enter the 3 admin details\n");
	a3=storeadmin();  
   printf("enter the 1 Admin  details are\n");
   	displayadmin(a1);
    displayadmin(a2);
	displayadmin(a3);

   }
   void displayadmin(struct admin adm)
   {
   printf(" A_ID = %d\n",adm.id);
   printf(" A_Name = %s\n",adm.name);
   printf(" A_Salary = %lf\n",adm.salary);
   printf(" A_aAllowance %lf\n",adm.allowance);
}
struct admin storeadmin()
{
    struct admin temp;
    scanf("%d", &temp.id);
    scanf("%s", &temp.name);
    scanf("%f", &temp.salary);
    scanf("%f", &temp.allowance);
    return temp;
}