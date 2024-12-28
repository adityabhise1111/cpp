#include<iostream>
#include<string>
using namespace std;

void sort(int arr[],int size){
  //base case   (stop)
  if (size==0) return;
  int min_index=0;
  //find minimum index
  for(int i =1; i<size ; i++){
    if(arr[i]<arr[min_index]) min_index= i;  
  }
  //store minimum index
  int min_value=arr[min_index];
  //shifting array (for loop in reverse)
  for(int k =min_index; k > 0;k--){
    arr[k]=arr[k-1];
  }
  //place
  arr[0]=min_value;

  //call recursively
  sort(arr+1,size-1);
}

int main(){
    
    ////            sorted   and        unsorted
                  
      int arr[]={   9             , 8 , 7 , 6 , 5 , 4, 3 , 2 , 1 ,          0             };
    //int arr[]={   0               9 , 8 , 7 , 6 , 5 , 4, 3 , 2 ,          1             };
    //int arr[]={   0,1               , 9 , 8 , 7 , 6 , 5 , 4, 3 ,          2             };
    //                      <--minvalue                                     |
    //                                  arr--> shift                        |
    //                 ^                                                    |
    //                 |                                                    |        
    //              place                                                   |
    //          forloop--->                                        search(smallest)                 
    // 
    sort(arr,10);
   for(int i=0; i<10 ;i++){
        cout<<arr[i];
    }
    cout<<endl;

}  