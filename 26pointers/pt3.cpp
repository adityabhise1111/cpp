#include <iostream>

using namespace std;

void print(int *p) {
    cout << *p << endl;
}

void update(int *p){
    p=p+1;
    cout<<"inside"<<p<<endl;
}

int main() {
    // Your code here
    int value = 5;
    int *p = &value;
    cout <<"before"<<p<<endl;
    update (p);
    cout<<p<<endl;


    return 0;
}