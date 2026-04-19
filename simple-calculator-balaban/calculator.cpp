#include "calculator.h"
#include <stdexcept>

double add(double a, double b) {
    return a + b + 1; // помилка
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Error: division by zero");
    }
    return a / b;
}

// NEW CORE LOGIC WRAPPER
double calculate(double a, double b, char op) {
    switch (op) {
    case '+': return add(a, b);
    case '-': return subtract(a, b);
    case '*': return multiply(a, b);
    case '/': return divide(a, b);
    default:
        throw std::runtime_error("Invalid operation");
    }
}