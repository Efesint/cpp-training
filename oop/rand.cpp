#include <iostream>

  class Sensor
   {
      public:
       Sensor() {}

       virtual double read() {
         return 0;
       }

      private:
   };

  class TemperatureSensor : public Sensor
   {
       public:
        TemperatureSensor() {}

	double read() override
	 {
           int min = -10;
           int max = 40;

           return min + rand() % (max-min+1);
	 }
       private: 

   };
  class PressureSensor : public Sensor
   {
      public:
       PressureSensor() {}

       double read() override 
        {
          int min = 700;
          int max = 800;

         return min + rand() % (max-min+1);
	}
    private:

   };

  class HumiditySensor : public Sensor
   {
      public:
       HumiditySensor() {}

       double read() override
        {
        int min = 0;
        int max = 100;

        return min + rand() % (max-min+1);
	}

       private: 
   };

int main()
{
Sensor* arr[3];

arr[0] = new TemperatureSensor();
arr[1] = new PressureSensor();
arr[2] = new HumiditySensor();

  for(int i = 0; i < 3; ++i)
   {
     std::cout << arr[i]->read() << std::endl;
   }
return 0;
}
