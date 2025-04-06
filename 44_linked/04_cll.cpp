#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};

class crll{
    public:
    Node* tail;
    crll(){
        tail = NULL;
    }
    void insert(int val){
        Node* newNode = new Node(val);
        if (tail == NULL){
            tail = newNode;
            tail -> next = tail;
            tail -> prev = tail;
        }else{
            newNode->next = tail->next;
            newNode->prev = tail;
            tail->next= newNode;
            tail = newNode;
            Node* temp= tail->next;
            temp->prev = newNode;
        }
    }

    void deleteNode(int val){
        if (tail == NULL ){
            cout <<"empty list";
            return;
        }
        Node* curr = tail->next;
        Node* pr = tail;

        do{
            if(curr->data ==val){
                if (curr ==tail && curr->next ==tail ){
                    delete curr;
                    tail = NULL;
                }else{
                    pr->next = curr -> next;
                    Node* itr = curr -> next;
                    itr->prev = curr -> prev; 
                    if(curr == tail){
                        tail = curr->prev;
                    }
                    delete curr;
                }
                cout << "Node with value " << val << " deleted.\n";
                return;
            }

            pr = curr;
            curr = curr->next;
        }while(curr != tail->next);

        cout<<"not found";
    }

    void display(){
        if(tail ==NULL){
            cout<<"List is empty.\n";
            return;
        }

        Node* temp = tail->next;
        do{
            cout<< temp->data<<" -> ";
            temp = temp->next;
        }while(temp != tail->next);
        cout<<"back to start"<<endl;
    }
};



int main(){
    // Node* node1 = new Node(10);
    // Node* tail = node1;
    // Node* head = node1;
    

    // cout<< temp -> data;

    crll cll;

    cll.insert(10);
    cll.insert(20);
    cll.insert(30);
    cll.insert(40);

    cout << "Circular Linked List:\n";
    cll.display();

    cll.deleteNode(20);
    cll.display();

    cll.deleteNode(10);
    cll.display();

    cll.deleteNode(100); 

    return 0;
}