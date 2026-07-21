#include <iostream>

  class Vehicle
   {
     public:
     Vehicle()
      {

      }
       virtual void start()
        {
         std::cout << "vehicle is started" << std::endl;
	}
      private:

   };

  class Car : public Vehicle
   {
       public:
       Car() {}
       
       void start() override
        {
          std::cout << "car is started" << std::endl;
	}

	private:

   };
  class Bike : public Vehicle
   {
       public:
       Bike() {}

       void start() override
        {
          std::cout << "bike is started" << std::endl;
	}
       private:
   };

int main()
{

Vehicle* arr[3];

arr[0] = new Vehicle();
arr[1] = new Bike();
arr[2] = new Car();

  for(int i = 0; i <= 2; ++i)
   {
     arr[i]->start();
   } 

return 0;
}
