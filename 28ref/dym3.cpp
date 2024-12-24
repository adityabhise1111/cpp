#include <iostream>

using namespace std;

int main() {
    // cout << "Hello, World!" << endl;
    // int m,n;
    // cin >> m >> n;  
    // //lets create a d array
    // int **arr = new int*[m];
    // for ( int i =0 ; i<m; i++){
    //     arr[i]= new int[n];
    // }
    // //insert in to arr
    // for (int i =0; i<m; i++)
    // {
    //     for (int j=0; j< n; j++){
    //         cin>>arr[i][j];
    //     }
    // }
    // //print the arrray 
    //  for ( int i=0; i<m; i++) {
    //     for ( int j=0 ; j<n; j++){
    //         cout<< arr[i][j]<<" "; 
    //     }
    //     cout<<endl;
    //  }
    //  //dont forget to delete the memory
    //  for (int i=0; i<m ; i++){
    //     delete [] arr[i];
    //  }

    //jaggered array
    int row = 3;
    int col[]={5,7,9};

    int **arr = new int*[row];
    for (int i=0; i<row;i++){
        arr[i]= new int[col[i]];

    }
    for(int i=0; i<row; i++){
        for (int j=0; j<col[i]; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<row; i++){
        for (int j=0; j<col[i]; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}