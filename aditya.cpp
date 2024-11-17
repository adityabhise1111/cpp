// Online C++ compiler to run C++ program online
#include <iostream>

int main() {
    char op; 
    double num1, num2, result;

    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;

    std::cout << "Enter two operands: ";
    std::cin >> num1 >> num2;

    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                result = num1 / num2;
            else {
                std::cout << "Error! Division by zero.";
                return 1;
            }
            break;
        default:
            std::cout << "Error! Operator is not correct";
            return 1;
    }

    std::cout << "Result: " << result << std::endl;
    // Write C++ code here
    std::cout << "Try \n";

    return 0;
}