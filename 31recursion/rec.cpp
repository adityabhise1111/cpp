#include <iostream>

using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int main() {

    cout << "Hello, World!" << endl;
    cout<<fact(5)<<endl;

    //recursion means a function calling itself
    //recursion is a powerful tool in programming
    //it is used to solve complex problems
    //it is used to solve problems which can be broken down into smaller
    // problems of the same type
    //base case is the smallest problem which can be solved directly
    //base case is the terminating condition
    //base case is mandatory in recursion
    //multiple functions calling each other is called mutual recursion

    cout << "Recursion tree for fact(3):" << endl;
    cout << "fact(3)" << endl;
    cout << "  |" << endl;
    cout << "  --> fact(2)" << endl;
    cout << "        |" << endl;
    cout << "        --> fact(1)" << endl;
    cout << "              |" << endl;
    cout << "              --> fact(0)" << endl;
    cout << "              <-- return 1" << endl;
    cout << "        <-- return 1 * 1 = 1" << endl;
    cout << "  <-- return 2 * 1 = 2" << endl;
    cout << "<-- return 3 * 2 = 6" << endl;
    return 0;
}