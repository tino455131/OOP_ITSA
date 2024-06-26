#include <iostream>
#include <cmath>

int main() {
    int b[6];
    long long int a = 0;
    for (int i = 0; i < 6; i++) {
        std::cin >> b[i];
        a += std::pow(b[i], 3);
    }
    std::cout << a << std::endl;
    return 0;
}

