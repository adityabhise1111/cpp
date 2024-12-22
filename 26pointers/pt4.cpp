#include <iostream>

using namespace std;

int main() {
    int a=10;
    int *b=&a;
    int **c=&b;
    int ***d=&c;
    cout << a<<" "<<b<<" "<<c<<" "<<d<< endl;
    cout << *b<<" "<<*c<<" "<<*d<< endl;
    cout << **c<<" "<<**d<< endl;
    cout << ***d<< endl;
    
    return 0;
}