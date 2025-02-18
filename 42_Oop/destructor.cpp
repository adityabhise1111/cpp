#include <iostream>

using namespace std ;
    class MyClass {
    public:
        MyClass() {
            cout << "Constructor called" << endl;
        }

        ~MyClass() {
            cout << "Destructor called" << endl;//automatic for static
        }
    };


int main() {
    MyClass obj1;
    MyClass *obj2= new MyClass();

    delete obj2;//manual for dynam

    return 0;
}