#include <iostream>

  class Lamp
   {
      public:
 
        Lamp()
         {
           is_on = false;
	   std::cout << "Лампа выключена" << std::endl;
         }

            void turn_on()
             {
               is_on = true;
             }
	      
            void turn_off()
	     {
               is_on = false;
	     }

	     void toggle()
	     {
                 if(is_on == false)
		  {
                     is_on = true;
		  } else {
                    is_on = false;
		  }
	     }

	     void print_state()
	     {
                if(is_on == false)
		 {
                    std::cout << "Лампа выключена";
		 }
		 else if(is_on == true)
		  {
                     std::cout << "Лампа включена";
		  }
	     }

      private:
      bool is_on;
   };

int main()
{
Lamp lamp;

lamp.turn_on();
lamp.print_state();

std::cout << std::endl;

lamp.turn_off();
lamp.print_state();

std::cout << std::endl;

lamp.toggle();
lamp.print_state();

std::cout << std::endl;


return 0;
}
