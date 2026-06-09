#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> v;
    for(int i = 0; i < n; ++i) {     
        int x;
        std::cin >> x;               
        v.push_back(x);               
    }

    int sum = 0;
    for(int i = 0; i < v.size(); ++i) {
        sum += v[i]; 
    }
    std::cout << sum;
    return 0;
}
