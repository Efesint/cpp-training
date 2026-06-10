#include <iostream>
#include <thread>
#include <chrono>

#define ASCII_ART \
"____|   ___|    _ \\    ___| _ _|  ____| __ __| \\ \\   /\n" \
" |     \\___ \\   |   |  |       |   __|      |    \\   /\n" \
" __|         |  |   |  |       |   |        |       |\n" \
"_|     _____/  \\___/  \\____| ___| _____|   _|      _|\n"

int main() {
    int a, b;
    char op;
    std::cout << ASCII_ART;
    std::cout << "it is fsociety calculator. first number:" << std::endl;
    std::cin >> a;
    std::cout << "second number:" << std::endl;
    std::cin >> b;  // У вас не было ввода для b
    std::cout << "operation: " << std::endl;
    std::cin >> op;

    std::cout << "Wait a sec" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1000)); 
    
    std::cout << "preparing an answer" << std::endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(1500));  
    for(int i = 0; i < 1000000; ++i) 
    {
        std::cout << "HACKER MISTER ROBOT" << std::endl;
        std::cout << "KALI LINUX" << std::endl;
    }
    
    return 0;
}
