#include <iostream>

  class Transport
   {
     public:
       Transport() {}

       virtual void move()
        {
          std::cout << "Transport is moving" << std::endl;
	}


     private:

   };

  class Car : public Transport
   {
      public:
      Car() {}

      void move() override
       {
         std::cout << "Car is moving" << std::endl;
       }
      private:
   };
  class Boat : public Transport
   {
      public:
       Boat() {}

       void move() override
        {
          std::cout << "Boat is moving" << std::endl;

	}
	
       private:
   };
 class Plane : public Transport
  {
     public:
      Plane() {}

       void move() override
        {
          std::cout << "Plane is moving" << std::endl;
	}
     private:

  };


int main()
{
Transport* arr[3];

arr[0] = new Car();
arr[1] = new Boat();
arr[2] = new Plane();

  for(int i = 0; i < 3; ++i)
   {
      arr[i]->move();
   }

return 0;
}
