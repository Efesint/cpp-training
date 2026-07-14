#include <iostream>

  class Timer
   {
    public:
    
    Timer(int s) 
     {
       seconds = s;
     }
       void tick()
        {
	   if(seconds != 0)
	    {
              seconds=seconds-1;
            } else if(seconds == 0)
	     {
	    std::cout << "Таймер уже на нуле!" << std::endl;
          }
	}
        bool is_finished()
	 {
          return seconds == 0;
 	 }
        void reset(int new_seconds)
	 {
           seconds = new_seconds;
	 }
	 void print()
	  {
	    std::cout << std::endl;
            std::cout << "Осталось " << seconds << " секунд" << std::endl;
	  }

    private: 
    int seconds;
   };

int main()
{
Timer t(5);
 while(t.is_finished() != 1)
  {
    t.tick();
    t.print();
  }
  t.tick();
  t.reset(3);
   while(t.is_finished() != 1)
  {
    t.tick();
    t.print();
  }


return 0;
}
