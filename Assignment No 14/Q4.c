//HR(id,name,salary,commission)
#include<stdio.h>
#include<string.h>
struct HR
{
	int id;
	char name[15];
	double salary;
	double commission;
};
void displayHR(struct HR );
struct HR storeHR();
void main()
{
	struct HR h1,h2,h3;
	printf("enter the Hr details HR1\n");
	h1=storeHR();
	printf("enter the Hr details HR2\n");
	h2=storeHR();
    printf("enter the Hr details HR3\n");
    h3=storeHR();
	printf("enter the Hr details HR2\n");
	displayHR(h1);
	displayHR(h2);
	displayHR(h3);
}
	void displayHR(struct HR hr)
	{
	printf(" HR_ID = %d\n",hr.id);
	printf(" HR_Name = %s\n",hr.name);
	printf(" HR_salary = %l\nf",hr.salary);
	printf(" HR_Commission = %lf\n",hr.commission);
	
}
struct HR storeHR()
{
	struct HR temp;
    scanf("%d",&temp.id);
	scanf("%s",&temp.name);	
	scanf("%lf",&temp.salary);
	scanf("%lf",&temp.commission);
	return temp;
}
