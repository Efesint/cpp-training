#include <iostream>

  class Animal
    {
       public:
        Animal(std::string n)
	  {
             name = n;
	  }
	void speak()
	 {
           std::cout << "Животное издаёт звук" << std::endl;
	 }
       
              void wag_tail()
       {
         std::cout << "hvost" << std::endl;
       }

       protected:
       std::string name;

    };

  class Dog : public Animal
   {
     public:
     
      Dog(std::string n) : Animal(n)
        {
   
        }
     void wag_tail() 
       {
         std::cout << " sobak hvost" << std::endl;
       }
      
     private:
    
   };

  class Cat : public Animal
   {
      public:

      Cat(std::string n) : Animal(n) {}

      private:

   };

int main()
{
Cat c("k");
Dog d("kek");
d.speak();
d.wag_tail();
std::cout << std::endl;

c.speak();
c.wag_tail();

return 0;
}
