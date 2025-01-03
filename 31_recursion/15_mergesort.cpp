#include <iostream>
using namespace std;

void merge(int *arr, int start, int end){
    //int mid = (start+end)/2; //out of bound
    int mid = start + (end-start)/2;

    int len1=mid-start+1;
  //int len2=end-(mid+1)+1; //end-mid-1+1
    int len2=end-mid;

    int * one=new int[len1];
    int * two=new int[len2];
    //created dynamic array
    //coz array size is not known at start
    //new key word is used to do it
    //heap memmory is allocated when new keyword is used
    
    //copy both
    int index = start;
    for(int i=0;i<len1;i++){
        one[i]=arr[index++];
    }
    
    index = mid;
    for(int i=0;i<len1;i++){
        two[i]=arr[index++];
    }

    //merge 
    int index1 =0;
    int index2=0;
    int mainindex=start;

    while(index1<len1 && index2<len2 ){
        if(one[index1]<=two[index2]){
            arr[mainindex++]=one[index1++]; 
            arr[mainindex++]=two[index2++];
        }
    }
    while(index1<len1){
        arr[mainindex++]=one[index1++]; 
    }
    while(index2<len2){
        arr[mainindex++]=two[index2++]; 
    }
    delete[] one;
    delete[] two;

}

void sort(int *arr, int start , int end){
    if(start>=end) return;
    int mid=start+(end-start)/2;
    sort(arr,start,mid);
    sort(arr,mid+1,end);
    merge(arr,start,end);
}

int main(){
    //             0               4   5               9
    int arr[] =  { 9 , 8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0};

    //       start(0)         mid=(4)               end(9)      size=10
    //                    (s+e)/2=(0+9)/2
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
    cout<<endl;
    int start=0;
    int end=9;
    sort(arr,start,end);
    for(int i=0;i<10;i++){
        cout<<arr[i];
    }
}