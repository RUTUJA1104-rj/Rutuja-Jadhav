import java.util.Scanner;
class Employee
     {

  String name;
  double basicSalary;
  static double companyBounsRate;
  
void setName(String n)
    {
        this.name=name;
    }
void setBasicSalary(double salary)
    {
         this.basicSalary=salary;
     }
static void setCompanyBonusRate(double rate)
{
    companyBounsRate = rate;
}

//======== Getter Methods ==========

   String setName()
    {
        return this.name;
    }
 double setBasicSalary()
    {
         return basicSalary;
     }
// ===========non-static

double calculateTotalSalary()
       {
        return basicSalary + (basicSalary * companyBounsRate /100);
       }


//=============default constructor=========

Employee()
    {
     System.out.println("Default constructor called");
      this.name="Siya";
      this.basicSalary=2000;
    }
//============= Parameterized Constructor ==========
 Employee(String name,double salary)
         {
         System.out.println("Parameterized constructor called");
         this.name=name;
         this.basicSalary = salary;
        }

void display()
{
    System.out.println("Employee Name  : " + name);
    System.out.println("Basic Salary   : " + basicSalary);
    System.out.println("Bonus Rate (%) : " + companyBounsRate);
    System.out.println("Total Salary   : " + calculateTotalSalary());
    System.out.println("===================================");
}}//Employee end here

class TestEmployee
      {
        public static void main(String[] args)
               {
  
                Scanner sc = new Scanner(System.in);
 
               Employee.setCompanyBonusRate(10);

                Employee e1 = new Employee("Rutuja",25000);
                 e1.display();

               Employee e2 =new Employee("Shobha",30000);
                
               e2.display();
        }
}

















        