#include <iostream>
// високосный год или обычный;
bool is_leap_year(int year)
{
  if(year % 400 == 0)
  {
    return true;
  }
  else if(year % 4 == 0 && year % 100 != 0)
  {
    return true;
  } else{ 
     return false;
  }
}



int main()
{

if(is_leap_year(2024))
{
	std::cout << "leap";

} else {

       std::cout << "common";
}

return 0;
}
