#include<stdio.h>
//SaleManeger(id,name,salary,incentive,target)
#include<string.h>
struct SaleManager
{
	int id;
	char name[20];
	double salary;
	float incentive;
	int target;
};
void main()
{
	struct SaleManager SM1,SM2;
	SM1.id=123;
	strcpy(SM1.name,"ruturaj");
	SM1.salary=5000000;
	SM1.incentive=50000;
	SM1.target=500;
   printf("display the SaleManeger details s1\n");
   
   printf(" S_ID = %d\n S_Name = %s\n S_Salary = %lf\n S_intencive = %f\n S_Target = %d\n",SM1.id,SM1.name,SM1.salary,SM1.incentive,SM1.target);
   
   printf("display the SaleManeger details s2\n");
   
   printf("S_ID = ");
   scanf("%d",&SM2.id);
   printf("S_Name = ");
   scanf("%s",&SM2.name);
   printf("S_Salary = ");
   scanf("%lf",&SM2.salary);
   printf("S_Intencive = ");
   scanf("%f",&SM2.incentive);
   printf("S_Target = ");
   scanf("%d",&SM2.target);
}