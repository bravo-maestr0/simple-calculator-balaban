#include <iostream>
#include "calculator.h"
#include "input.h"

int main() {
    double a = getNumber("Enter first number: ");
    double b = getNumber("Enter second number: ");
    char op = getOperation();

    try {
        double result;

        switch (op) {
        case '+': result = add(a, b); break;
        case '-': result = subtract(a, b); break;
        case '*': result = multiply(a, b); break;
        case '/': result = divide(a, b); break;
        default:
            std::cout << "Invalid operation\n";
            return 1;
        }

        std::cout << "Result: " << result << std::endl;
    }
    catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}