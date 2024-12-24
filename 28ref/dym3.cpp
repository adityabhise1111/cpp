#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    int m,n;
    cin >> m >> n;  
    //lets create a d array
    int **arr = new int*[m];
    for ( int i =0 ; i<m; i++){
        arr[i]= new int[n];
    }
    //insert in to arr
    for (int i =0; i<m; i++)
    {
        for (int j=0; j< n; j++){
            cin>>arr[i][j];
        }
    }
    //print the arrray 
     for ( int i=0; i<m; i++) {
        for ( int j=0 ; j<n; j++){
            cout<< arr[i][j]<<" "; 
        }
        cout<<endl;
     }
     //dont forget to delete the memory
     for (int i=0; i<m ; i++){
        delete [] arr[i];
     }
    return 0;
}