#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int key)
{
    if (size == 0) return 0;
    if (arr[0] == key) return 1;
    return linear_search(arr+1, size-1, key);
}

int main() {
    cout << "Hello, World!" << endl;
    int arr[] = {1,2,3,4,5};
    (linear_search(arr, 5, 3))? (cout<<"Present"<<endl):(cout<<"Absent"<<endl);
    return 0;
}