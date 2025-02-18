#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this -> data= data;
        this -> next = nullptr;
    }

   
};
node* arr2ll (vector<int> &arr){
    node* head= new node(arr[0]);
    node* mover= head;
    for (int i=0;i<arr.size();i++){
        node* temp =new node(arr[i]);
        mover->next = temp;
        mover=temp;
    }
    return head;

}
void printll(vector<int> &arr){
    node* mover 
}
int main() {
    cout << "Hello, ji" << endl;

    vector<int> arr ={1,2,3,4,5};
    node* head = arr2ll(arr);
    cout<<head->data;
    cout<<endl;
    cout<<head->next;
    return 0;
}