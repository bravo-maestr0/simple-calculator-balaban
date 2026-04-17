#include <iostream>
#include "input.h"

double getNumber(const char* prompt) {
    double value;
    std::cout << prompt;
    std::cin >> value;
    return value;
}

char getOperation() {
    char op;
    std::cout << "Enter operation (+, -, *, /): ";
    std::cin >> op;
    return op;
}