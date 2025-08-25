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
void main()
{
	struct HR h1,h2;
	h1.id=111;
	strcpy(h1.name,"shobha");
	fflush(stdin);
	h1.salary=45000;
	h1.commission=45000;
	printf("display the Hr details HR1\n");
	
	printf(" HR_ID = %d\n HR_Name = %s\n HR_Salary = %lf\n HR_Commission = %lf\n",h1.id,h1.name,h1.salary,h1.commission);
	
	printf("display the Hr details HR2\n");
	
	printf(" HR_ID = ");
	scanf("%d",&h2.id);
	printf(" HR_Name = ");
	scanf("%s",&h2.name);
	printf(" HR_salary = ");
	scanf("%lf",&h2.salary);
	printf(" HR_Commission = ");
	scanf("%lf",&h2.commission);
}
	