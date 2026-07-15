#include <iostream>
#include <string>

// red = 0;
// yellow = 1
// green = 2

  class TrafficLight
   {
     public:
       
      TrafficLight()
       {
         current_color = 0;
       }

       void next()
        {
           if(current_color < 2)
	    {
              ++current_color;

	    } else
	      {
                 reset();
	      } 
	}

       void reset()
        {
          current_color = 0;
	}

	std::string get_color()
	 {
           if(current_color == 0)
	    {
               return "red";
	    }
	   else if(current_color == 1)
	    {
              return "yellow";
	    }
	   else if(current_color == 2)
	    {
               return "green";
	    } else {
              return "error";
	    }
	 }

	 bool is_red()
	  {
             if(current_color == 0)
	      {
                return true;
	      } else {
                return false;
	      }
	  }

     private:
     int current_color;
   };


int main()
{

TrafficLight tr;

for(int i = 0; i < 3; ++i)
 {
   tr.next();
   std::cout << tr.get_color() << std::endl;
 }

std::cout << tr.is_red() << std::endl;

tr.reset();
std::cout << tr.get_color() << std::endl;

return 0;

}
