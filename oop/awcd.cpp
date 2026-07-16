#include <iostream>

  class Animal
    {
       public:
        Animal(std::string n)
	  {
             name = n;
	  }
      virtual void speak()
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

     void speak() override
      {
         std::cout << "SPEAK D" << std::endl;
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
Animal a("k");
Dog d("kek");
Animal* animals[2];
animals[0] = &d;
animals[1] = &a;

animals[1]->speak();
std::cout << std::endl;
animals[0]->speak();

return 0;
}
