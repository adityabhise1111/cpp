#include <iostream>

void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}
    std::cout << "Result: " << a + b << std::endl;
void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}
    std::cout << "Result: " << a - b << std::endl;
void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}
    std::cout << "Result: " << a * b << std::endl;
void divide(double a, double b) {
    if (b != 0) {
        cout << "Result: " << a / b << endl;
    } else {
        std::cout << "Result: " << a / b << std::endl;
    }
        std::cout << "Error: Division by zero!" << std::endl;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter an operator (+, -, *, /): ";
    std::cin >> operation;
    std::cout << "Enter second number: ";
    std::cin >> num2;
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            divide(num1, num2);
            break;
        default:
            cout << "Error: Invalid operator!" << endl;
            break;
            std::cout << "Error: Invalid operator!" << std::endl;

    return 0;
}