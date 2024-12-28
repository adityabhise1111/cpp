#include<iostream>
#include<string>
using namespace std;

void sort(int arr[],int size){
    if (size==1) return;
    bool is_req_swap= false;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1] ){
            swap( arr[i] , arr[i+1] );
            is_req_swap=true;
        }
    }
    if(is_req_swap==false) return;
    sort(arr,size-1);
}


int main(){


    //              i  i+1
    //              |   | <-------(arr)
    int arr[]={ 8 , 7 , 9 , 6 , 5 , 4 , 3 , 2 , 1 };
    //          i  i+1  |   |
    //                  |   |
    //                  i  i+1 
    //                   (9)----------->
    //                   biggest element  


    sort(arr,9);
    for(int i=0; i<9 ;i++){
        cout<<arr[i];
    }
    cout<<endl;
}  


  