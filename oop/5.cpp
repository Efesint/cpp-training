#include <iostream>

bool is_divisible_by_3_and_5(int n)
{
     if(n % 3 == 0 && n % 5 == 0)
     {
       return true;
     } else{
        return false;
     }
     

}




int main()
{

if(is_divisible_by_3_and_5(15))
{
  std::cout << "yes";
}else{
	std::cout << "no";
}


return 0;
}
