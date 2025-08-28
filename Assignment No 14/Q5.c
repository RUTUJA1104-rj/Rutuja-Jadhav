////SaleManeger(id,name,salary,incentive,target)
#include<stdio.h>
struct SaleManager
{
	int id;
	char name[20];
	double salary;
	float incentive;
	int target;
};
void displaySaleManager(struct SaleManager );
struct SaleManager storeSaleManager();
void main()
{
	struct SaleManager SM1,SM2,SM3;

   printf("enter the SaleManeger details s1\n");
   SM1=storeSaleManager();

   printf("enter the SaleManeger details s2\n");
   SM2=storeSaleManager();

   printf("enter the SaleManeger details s3\n");
    SM3=storeSaleManager();
  
   printf("enter the SaleManeger details are\n");

   displaySaleManager(SM1);
   displaySaleManager(SM2);
   displaySaleManager(SM3);
   
   
}
void displaySaleManager(struct SaleManager smngr)
{ 
   printf("S_ID = %d\n",smngr.id);
   printf("S_Name = %s\n",smngr.name);
   printf("S_Salary = %lf\n",smngr.salary);
   printf("S_Intencive = %lf\n",smngr.incentive);
   printf("S_Target = %d\n",smngr.target); 
   
}
struct SaleManager storeSaleManager()
{
  struct SaleManager temp;
  scanf("%d",&temp.id);
  scanf("%s",&temp.incentive);
  scanf("%lf",&temp.salary);
  scanf("%f",&temp.incentive);
  scanf("%d",&temp.target);
}