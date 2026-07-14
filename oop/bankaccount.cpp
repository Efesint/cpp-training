#include <iostream>
#include <string>

 class BankAccount 
  {
     public:
     BankAccount(std::string o, double b)
      {
        owner = o;
	balance = b;
      }
      void deposit(double amount)
       { 
         if(amount < 0)
	  {
           std::cout << "Сумма должна быть положительной" << std::endl;
	  } else {
         balance+=amount;
         }
       }

      bool withdraw(double amount) 
       {
          if(amount <= 0 || amount > balance)
	   {
             std::cout << "Недостаточно средств или неверная сумма" << std::endl;
	     return false;
	   } else {
             balance-=amount;
	     return true;
	   } 
       }
       void print()
        {
           std::cout << "Владелец:" << owner << std::endl;
	   std::cout << "Баланс: " << balance << std::endl;
	}
	double get_balance() 
	 {
           return balance;
	 }

     private:
     std::string owner;
     double balance;
  };


int main()
{
BankAccount ac("Alice", 1000);
ac.deposit(500);
ac.print();
std::cout << std::endl;
ac.withdraw(200);
ac.print();
std::cout << std::endl;
ac.deposit(-100);
ac.withdraw(2000);
return 0;
}
