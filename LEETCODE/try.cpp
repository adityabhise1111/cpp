#include <iostream>

using namespace std;int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int cnt=0;
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            cnt++;
        }
    }
    int pivotindex=s+cnt; 
    swap(arr[pivotindex],arr[s]);
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j++;
        }
        swap(arr[i],arr[j]);
    }
    return pivot;
}

int main() {
    int arr[]={ 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 ,0};
    cout<<partition(arr,0,9)<<endl;
    cout << "Hello, World!" << endl;
    return 0;
}