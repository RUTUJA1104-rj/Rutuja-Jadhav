import java.util.Scanner;
class ElectricityBill
{
 int customerNumber;
 String customerName;
double unitsConumed;
static double ratePerUnit;




//=============== Setter Method =============
void setCustomerNumber(int number)
     {
         this.customerNumber=number;
     }
void setcustomerName(String name)
    {
       this.customerName=name;
    }
void setunitsConumed(double unit)
    {
       this.unitsConumed=unit;
    }
// ======== Getter Method =========

int getCustomerNumber()
     {
         return customerNumber;
     }
String setcustomerName()
    {
       return customerName;
    }
double setunitsConumed()
    {
       return unitsConumed;
    }
//===========calculate Bill==========
double calculateBill()
{
 return unitsConumed * ratePerUnit;
}
 
ElectricityBill()
    {
        System.out.println("\nDefault constructor called");
        this.customerNumber = 101;
        this.customerName= "Shobha";
        this.unitsConumed= 4000;
        
       
    }

    // =================== Parameterized Constructor =================

    ElectricityBill(int number,String name,double unit)
    {
        System.out.println("\nParameterized constructor called");
       
        
        this.customerNumber =number;
        this.customerName= name;
        this.unitsConumed=unit;
        
}


//============display function============

void display()
{
   System.out.println("Customer Number:" + customerNumber);
   System.out.println("customer Name:" + customerName);
 System.out.println("Unit Consumed :"  +unitsConumed);
System.out.println(" Rate per Unit:" + ratePerUnit);
System.out.println("Total Bill:" +calculateBill());
System.out.println("================================");
}

}



class TestElectrictyBill
{
public static void main(String[] args)
  {
    Scanner sc = new Scanner(System.in);
        {
    
           ElectricityBill e1 = new ElectricityBill(101,"Riya",550.7788);
              e1.display();
 
           ElectricityBill e2 = new ElectricityBill(103,"Ruturaj",145.87);
              e2.display();

         ElectricityBill e3 = new ElectricityBill(142, "Shobha",542.965);
           e3.display();
          }
      }
 }


















