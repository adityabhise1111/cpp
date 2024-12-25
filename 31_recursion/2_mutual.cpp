#include <iostream>

void even(int n);
void odd(int n);




void even(int n) {
    if (n % 2 == 0) {
        std::cout << n << " is even." << std::endl;
    }
    if (n > 0) {
        odd(n - 1);
    }
}

void odd(int n) {
    if (n % 2 != 0) {
        std::cout << n << " is odd." << std::endl;
    }
    if (n > 0) {
        even(n - 1);
    }
}

int main() {
    int startNumber = 10;
    // Start the mutual recursion with the initial number
    even(startNumber);
    return 0;
}