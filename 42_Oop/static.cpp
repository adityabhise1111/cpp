#include <iostream>

using namespace std ;
    class MyClass {
    public:
    static int time;
        MyClass() {
            cout << "Constructor called" << endl;
        }

        ~MyClass() {
            cout << "Destructor called" << endl;//automatic for static
        }

        static int random(){
            return time;
        }
    };
int MyClass::time=10;

int main() {
    MyClass obj1;
    MyClass *obj2= new MyClass();

    delete obj2;//manual for dynam

    cout<<obj1.time<<endl;
    obj1.time=20;
    cout<<obj2->time<<endl;

    cout<<"static fun call"<<MyClass::random()<<endl;

    return 0;
}