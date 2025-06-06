#include <iostream>
using namespace std;

int main() {
    // Your code goes here
    cout << "Hello, World!" << std::endl;
    for(int col=0; col<4; col++){
        for(int row=0; row<col; row++){
            cout<<col<<" " << row << " ";
        }
            cout<<endl;
        
    }
    return 0;
}