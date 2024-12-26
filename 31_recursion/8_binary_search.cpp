#include <iostream>
#include <vector>
using namespace std;
//
//binary search using recursion
int search(const vector<int> &arr, int key,int start =0, int end=-1){
     if(end==-1) {
        end=arr.size()-1;
        }
     if(start>end) return -1;
     int mid = start +( end-start)/2;
     if(arr[mid]==key) return mid;
     if(arr[mid]>key) {
        if(mid==start)return-1;
        return search(arr,key,start,mid-1);
     };
     if(mid==end)return-1;
     return search(arr,key,mid+1,end);

}

int main(){
    vector <int> arr= {2,5};
    cout<<search(arr,0)<<endl;
    return 0;
}
 

 //12 to 15 pending