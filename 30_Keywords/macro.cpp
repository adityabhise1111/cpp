#include <iostream>

using namespace std;
#define PI 3.14159

int main() {
    cout << "Hello, World!" << endl;
    //macro value is replaced by the preprocessor before the code is compiled
    int area= PI*5*5;
    // before compilation, the above line will be replaced by 
    //int area= 3.14159*5*5;
    //will not store the value of PI in the memory

    //macro is a piece of code in a program which is given som e name. 
    //Whenever this name is encountered by the compiler the
    //compiler replaces the name with the actual piece of code.
    return 0;
}