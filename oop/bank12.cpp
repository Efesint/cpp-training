#include <iostream>
#include <string>
   class BankAccount
    {
       public:
        BankAccount(std::string o, double b, int p)
	  {
            owner = o;
	    balance = b;
	    pin = p;
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

       bool check_pin(int input_pin)
        {
           return input_pin == pin;
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
       int pin;
    };

  class ATM
   {
   public:
     ATM()
      {
     current_account = nullptr;     
     authenticated = false;
      }
        void insert_card(BankAccount& account)
	 {
             current_account = &account;
	     authenticated = false; 
	 }
	bool enter_pin()
	 {
	   int x; 
           std::cout << "Введите пин" << std::endl;
	   std::cin >> x;
	   if(current_account->check_pin(x))
	    {
              std::cout << "Пин код верный" << std::endl;
	      authenticated = true;
	      return true;
	    } else {
              return false;
	    }
	 }
	       void deposit(double amount)
               {
	       if( authenticated == true && current_account != nullptr)
	         {
                  if(amount < 0)
	           {
                   std::cout << "Сумма должна быть положительной" << std::endl;
	            } else {
                     current_account->deposit(amount);
                       }
	             } else {
                std::cout << "Ошибка!Карта не вставлена и пользователь не авторизирован " << std::endl;
		  }
		}

               bool withdraw(double amount) 
                 {
		  if( authenticated == true && current_account != nullptr)
		   {
                     return current_account->withdraw(amount);
	            
       } else {
        std::cout << "Ошибка" << std::endl;
	return false;
       } 
      }

                void eject()
		 {
                     current_account = nullptr;
		     authenticated = false;
		 } 
		 void print_balance()
		  {
                     std::cout << "Баланс: " << current_account->get_balance();
		  } 
   private:
     BankAccount* current_account;
     bool authenticated;
   }; 
int main()
{
BankAccount ac("sss", 0, 1234);
ac.withdraw(100);
   ATM atm;

    // Попытка снять БЕЗ карты
    atm.withdraw(100);  // Ошибка

    atm.insert_card(ac);

    // Попытка снять ДО ввода пина
    atm.withdraw(100);  // Ошибка

    atm.enter_pin();    // Введи 1234
    atm.withdraw(100);  // Теперь должно сработать
    atm.print_balance(); // 900

    atm.eject();
    atm.withdraw(100);  // Ошибка (карта вытащена)

    return 0;
return 0;
}
