#include <iostream>

using namespace std;
void print(int a=10, int b=20){
    cout<<a<<" "<<b<<endl;
}

int main() {
    //default arguments
    //if we don't pass any value to the function, it will take the default value
    //if we pass the value, it will take the passed value
    print();
    print(30);
    print(30,40);
    print(b=30,a=40);//this is called named arguments
    //print(30,40,50); //error
    //default arguments should be from right to left

    cout << "Hello, World!" << endl;
    return 0;
}