// main.cpp
#include "sdt.h"
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter chislo A: ";
    std::cin >> a;
    std::cout << "Enter chislo B: ";
    std::cin >> b;
    int sum = a + b; 
    std::cout << "Summa: " << sum << std::endl;
    int diff = a - b;
    std::cout << "Raznost: " << diff << std::endl;
    return 0;
}

