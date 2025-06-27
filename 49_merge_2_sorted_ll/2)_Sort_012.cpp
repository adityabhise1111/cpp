#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


void insertAtTail(Node* &tail , Node*temp){
    Node *curr = new Node();
    curr->data = temp->data;
    tail->next = curr;
    tail = curr;
}

Node* sortList(Node *head){
    // Write your code here.
    
        Node *one = new Node();
        Node *onetail = one;
        Node *two = new Node();
        Node *twotail = two;
        
        Node *zero = new Node();
        Node *zerotail = zero;
        
        Node *temp = head;
    
    
    while(temp != NULL){
        if(temp ->data == 0){
            insertAtTail(zerotail, temp );
        }
        else if(temp ->data == 1){
            insertAtTail(onetail, temp);
        }
        else if(temp ->data == 2){
            insertAtTail(twotail, temp);
        }

        temp= temp->next;
    }



    if(one->next != NULL){
        zerotail ->next = one->next;
    }else{
        zerotail ->next = two->next;
    }

   

    onetail ->next = two->next;
    twotail -> next = NULL;

    head = zero -> next ;
    return head;
}