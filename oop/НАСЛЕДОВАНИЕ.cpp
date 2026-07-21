#include <iostream>

  class Employee
   {
    public:
     Employee(double s)
     {
       salary = s;
     }
       
       virtual double calculateSalary()
        {
	  return salary;
	}

    protected:
     double salary;

   };

  class Manager : public Employee
   {
     public:
      Manager(double s) : Employee(s)  
      {

      }

      double calculateSalary() override
       {
         return salary*1.5;   
       }

      private:
       
   }; 
  
  class Intern : public Employee
   {
     public:
      Intern(double s) : Employee(s) {}

      double calculateSalary() override
       {
          return salary*0.8;
       }

     private:
   };
  class Developer : public Employee
   {
      public:
       Developer(double s) : Employee(s) {}

       double calculateSalary() override
        {
            return salary*1.2;
	}

      private:

   };
    

int main()
{
Employee* arr[4];

arr[0] = new Manager(50);
arr[1] = new Manager(50);
arr[2] = new Developer(50);
arr[3] = new Intern(50);

  for(int i = 0; i < 4; ++i)
   {
     std::cout <<arr[i]->calculateSalary() << std::endl;
   }


return 0;
}
