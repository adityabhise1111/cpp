#include <iostream>
using namespace std;

int main() {
    int m = 3, n = 3; // Initialize m and n with appropriate values
    int **arr = new int*[n];

    // Allocate memory for each row
    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    // Inserting values (example)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>arr[i][j];
        }
    }

    // Print the array (example)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate memory
    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}