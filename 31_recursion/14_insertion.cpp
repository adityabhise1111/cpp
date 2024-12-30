#include<iostream>
using namespace std;


void sort(int arr[],int size,int index=1){
    if (size==0){
        return;
    }
    
    if(index == size){
        return;
    }
    int value=arr[index];
    int j = index;

    while(value < arr[j-1] && j>0){
        arr[j]=arr[j-1];
        j--;
    }
    arr[j]=value;

    sort(arr,size,index+1);
}


int main(){
    int arr[]={ 1 , 2 , 3 , 9 , 8 , 7 , 6 , 5 , 4 };
    cout<<"magie"<<endl;
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sort(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
}