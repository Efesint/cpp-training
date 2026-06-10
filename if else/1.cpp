#include <iostream>

int main()
{
int n;
std::cin >> n; 

if(n < 18) {
    std::cout << "minor";
} else if(n <= 65) {
    std::cout << "adult";
} else {
    std::cout << "senior";
}

}
