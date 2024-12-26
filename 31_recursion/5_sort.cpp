#include <iostream>
using namespace std;

bool isSorted (int arr[], int size)
{
    if ( size ==1) return 1;
    if (arr[0]>arr[1]) return 0;
    return isSorted(arr+1, size-1);
}
int main() {
    cout << "Hello, World!" << endl;
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};
    cout << isSorted(arr1, 5) << endl;
    cout << isSorted(arr2, 5) << endl;
    return 0;
}