#include <iostream>
   class Therm 
    {
      public:
      Therm(double v)
       {
         temp = v;
       }
      void set_temperature(double t)
       {
         temp = t;    
       }
       double get_temperature()
        {
          return temp;
	}
	bool is_freezing()
	 {
            if(temp <= 0) 
	     {
	     return true;
	      } else {
                 return false;
	      } 
	 }
	 bool is_boiling()
	  {
             if(temp >= 100)
	     {
	      return true;
	     } else {
              return false;
	     }
	  } 
        void print()
	 {
	    std::cout << std::endl;
            std::cout << "Температура равна " << get_temperature();
	    std::cout << std::endl;
	 }

      private:
      double temp;
    };
int main()
{

Therm t(25.0);
t.print();
std::cout << t.is_freezing() << std::endl << t.is_boiling() << std::endl;
t.set_temperature(-5);
t.print();
std::cout << t.is_freezing() << std::endl;
t.set_temperature(105);
t.print();
std::cout << t.is_boiling() << std::endl;
return 0;
}
