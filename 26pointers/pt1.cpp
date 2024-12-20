// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // int num = 5;
    // // creates block of name num & value [5]
    // // symbol table records of name and address
    // cout<<num<<endl;
    // cout<<&num<<endl;
    // int *ptr = &num;
    // cout <<"ptr"<<ptr<<endl;
    // cout <<&ptr<<endl;

    int i =5;
    int *p = &i;
    cout<<p<<endl;//address of i 
    cout<< *p<<endl;//value of i
    cout<< &p<<endl;//address of p
    *p++;
    cout<<i<<endl;


    return 0;
    
}