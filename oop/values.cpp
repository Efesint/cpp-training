#include <iostream>

class Counter
{
public:

  Counter(double m) 
   {
     value = 0;
     max_value = m;
   }
   
   void increment()
   {
       if(value == max_value)
        {
          std::cout << "Достигнут максимум " << std::endl;
          return;
         }
        
      ++value; 

          if (value == max_value)
	   {
           
           std::cout << "Достигнут максимум" << std::endl;
	}
     

   }

   void reset()
   {
     value = 0;
   }
   int get_value()
   {
     return value;
   }

   void info()
   {
     std::cout << "value = " << value;
   }

private:
int value;
int max_value;

};

int main()
{

Counter c(5.);

for(int i = 0; i < 7; ++i)
{
  c.increment();
  c.info();
  std::cout << std::endl;
}

c.reset();

for(int i = 0; i < 2; ++i)
{
  c.increment();
  c.info();
  std::cout << std::endl;
}


return 0;
}
