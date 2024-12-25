#include <iostream>

using namespace std;

int getsum(int *arr, int n){
    int sum =0;
    for (int i=0; i<n; i++){
        sum +=arr[i];
    }
    return sum;
}

int main() {
    
    char ch = 'q';
    char *p = &ch;
    cout <<sizeof(p) << endl; // 8
    cout <<sizeof(ch) << endl; // 1
    // you can allocate dynamic memmory using new keyword
    // here allocate memory in heap and p is pointing to that memory

    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i=0; i<n; i++){
        cout << "Enter the value of arr[" << i << "] : ";
        cin >> arr[i];
    }
    cout << "Sum of the array is : " << getsum(arr, n) << endl;

    cout << "Hello, World!" << endl;
    return 0;
}