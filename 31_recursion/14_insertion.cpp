#include <iostream>
using namespace std;

// Recursive function to sort an array using insertion sort
void recursiveInsertionSort(int arr[], int n) {
    // Base case
    if (n <= 1)
        return;
    
    // Sort first n-1 elements recursively
    recursiveInsertionSort(arr, n-1);
    
    // Insert last element at its correct position in sorted array
    int last = arr[n-1];
    int j = n-2;
    
    while (j >= 0 && arr[j] > last) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = last;
}

// Function to print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << "Original array: ";
    printArray(arr, n);
    
    recursiveInsertionSort(arr, n);
    
    cout << "Sorted array: ";
    printArray(arr, n);
    
    return 0;
}