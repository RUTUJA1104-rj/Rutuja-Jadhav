import java.util.Scanner;
class Library
{
String name;
int daysLate;
static double finePerDay=2.0;


void setName(String n)
     {
        this.name=n;
      }
void setDaysLate(int d)
     {
          this.daysLate=d;
      }
static void setFinePerDay(double fine)
       {
          finePerDay =fine;
        }
//========Getter method=======

String setName()
     {
        return this.name;
      }
int setDaysLate()
     {
          return this.daysLate;
      }
static double getFinePerDay()
       {
          return finePerDay;
        }
//=========== Default Constructor ==========

Library()
   {
     name="Rutuja";
     daysLate=5;
    }
 //==============Parameterized constructor=======

Library(String n ,int d)
        {
           name=n;
           daysLate=d;
         }


void display()
{
 double totalFine = daysLate * finePerDay;
 System.out.println("Name: " +name);
 System.out.println("Days Late: " +daysLate);
 System.out.println("Fine Per Day: " + finePerDay);
System.out.println("Total Fine :"+totalFine);
System.out.println("========================");
}
}

class TestLibrary
{
  public static void main(String[] args)
{
   Library u1 = new Library("rutuja",9);
   u1.display(); 
  Library u2 = new Library("Sakshi",5);
 u2.display();

}
}

 

















