#include<iostream>
using namespace std;


int add(int arr[], int size)
{
    if (size ==0) return 0;
    return arr[0] + add( arr+1, size-1);
}
    int main() {
    cout << "Hello, World!" << endl;
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};
    cout << add(arr1, 5) << endl;
    cout << add(arr2, 5) << endl;
    return 0;
}