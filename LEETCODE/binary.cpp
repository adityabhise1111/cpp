#include <iostream>

using namespace std;
string binstr(int n){
    if(n==0){
        return "0";
    }
    if(n==1){
        return "1";
    }
    return binstr(n/2)+to_string(n%2);
}
int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;
    cout << "The binary representation of " << n << " is " << binstr(n) << endl;
    cout << "Hello, World!" << endl;
    return 0;
}