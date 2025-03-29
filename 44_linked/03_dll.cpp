#include <iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    

        Node(int d){
            this->data = d;
            this->next = NULL;
            this->prev = NULL;
            
        }
};
void insertAtHead(Node* &head, int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
    }

    Node* temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
void insertAtTail(Node* &tail, int d){

    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp;
    }
    Node* temp = new Node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}
void insertAtPos(Node* &head ,Node* &tail, int pos, int d){
    Node* temp = new Node(d);
    Node* trvl =head;
    while(pos-1){
        pos--;
        trvl=trvl->next;
    }
    if(trvl==NULL){
       insertAtTail(&tail,d);
    }
    temp->prev = trvl;
    temp->next = trvl->next;
    trvl->next = temp;
    trvl = temp->next;
    trvl->prev = temp;

}
int getLenght(Node* head){
    Node* temp = head;
    int count=0;

    while(temp!=NULL){
        count++;
        temp= temp->next;
    }
    return count;
    
}
void print(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<< temp->data;
        temp= temp->next;
    }
    cout<<endl;
}

int main() {
    cout << "Hello, World!" << endl;
    Node* node1= new Node(10);
    Node* head = node1;
    Node* tail = node1;
    print(head);
    cout<<endl;

    insertAtHead(head,11);
    print(head);
    
    insertAtHead(head,12);
    print(head);

    
    insertAtTail(tail,13);
    print(head);
    
    insertAtTail(tail,14);
    print(head);

    
    insertAtPos(head,tail,3,99);
    print(head);

    return 0;
}