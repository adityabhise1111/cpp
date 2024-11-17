#include <iostream>

using namespace std;

void add(double a, double b) {
    cout << "Result: " << a + b << endl;
}

void subtract(double a, double b) {
    cout << "Result: " << a - b << endl;
}

void multiply(double a, double b) {
    cout << "Result: " << a * b << endl;
}

void divide(double a, double b) {
    if (b != 0) {
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Error: Division by zero!" << endl;
    }
}

int main() {
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter an operator (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    switch (operation) {
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
    }

    return 0;
}