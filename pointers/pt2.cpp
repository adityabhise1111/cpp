#include <iostream>

using namespace std;

int main() {
    // Your code here
    int arr[5] = {1, 2, 3, 4, 5};
    cout<< "address of 1st memmory bllock is "<<arr<<endl;
    cout<< "address of 1st memory block is " << &arr[0]<<endl;

    return 0;
}