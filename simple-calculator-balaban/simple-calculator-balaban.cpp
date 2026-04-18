#include <iostream>
#include "calculator.h"
#include "input.h"

int main() {
    std::cout << "Simple calculator" << std::endl;
    std::cout << "Calculator started" << std::endl;

    double a = getNumber("Enter first number: ");
    double b = getNumber("Enter second number: ");
    char op = getOperation();

    try {
        double result = calculate(a, b, op);
        std::cout << "Result: " << result << std::endl;
        std::cout << "Calculation done" << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    // trigger CI for PR
    return 0;
}