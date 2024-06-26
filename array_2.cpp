#include <iostream>

int main() {
    int b[6];

    for (int i = 0; i < 6; i++) {
        std::cin >> b[i];
    }
    for (int i = 0; i < 6; i++) {
        std::cout << b[5 - i];
        if (i != 5) std::cout << " ";
    }
    std::cout << std::endl;
    return 0;
}

