#include <iostream>

using namespace std;

int main() {
    int *p=0;
    int first = 110;
    p = &first;// This will cause a segmentation fault
    //p = &first;
    
    cout << *p << endl;
    return 0;
}