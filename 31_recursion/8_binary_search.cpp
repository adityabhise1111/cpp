#include<iostream>
using namespace std;

bool bsearch(int arr[], int size, int key)
{
    if (size == 0) return 0;
    if (arr[size/2] == key) return 1;
    if (arr[size/2] > key) return bsearch(arr, size/2, key);
    return bsearch(arr+size/2+1, size-size/2-1, key);
}

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}