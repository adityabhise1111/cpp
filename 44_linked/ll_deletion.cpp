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

void insertathead(node* &head,int d){
        node* temp=new node(d);

        temp->next= head;
        head = temp;
}

void insertattail(node* &tail,int d){
        node* temp=new node(d);

        tail->next= temp;
        tail = temp;
}

void printll(node* &head){
        node* temp = head;
        while(temp != NULL){
            cout<< temp ->data<<" ";
            temp= temp->next;

        } 

    }

void insertAtPos(node* &head, int pos, int d){
        if (pos == 1) {
        insertathead(head, d);
        return;
    }

        node* temp = new node(d);
        node* mover = head;
        
        int count=1;
        
        while(count!= pos-1){
            mover = mover-> next;
            count++;
        }

        if(mover->next == NULL){
            insertattail(mover,d);
        }else {
        temp->next = mover->next;
        mover->next = temp;
        }

    }

void delete_pos(node* &head, int pos){

    node* temp = head;
    if(pos==1){
        head = head->next;
        delete temp;
        return;
    }
    
    
    if(!head) return;

    if(head==head->next) {
        delete temp;
        return;
    }

    for(int i=1 ; i<= pos-1 ; i++){
        temp= temp->next;
    }

            // If position is out of bounds
            if (!temp || !temp->next) return;

    node* delete_node = temp->next;
    
    temp->next= delete_node->next;
    delete delete_node;

}

int main() {
    cout << "Hello, ji" << endl;
    node* ll1 = new node(10);
    node* head = ll1;
    node* tail = ll1;
    
    printll(ll1);

    cout<<"created"<<endl;

    insertathead(head,20);

    printll(head);
    cout<<"aded head"<<endl;
    insertathead(head,50);

    printll(head);
    cout<<"aded head"<<endl;
    
    insertattail(tail,30);

    printll(head);

    cout<<"aded tail"<<endl;

    insertAtPos(head, 3, 0);
    printll(head);
    cout<<"aded pos"<<endl;
    insertAtPos(head, 6, 90);
    printll(head); 
    cout<<"aded pos"<<endl;  
    
    delete_pos(head, 3);
    printll(head); 

    return 0;
}