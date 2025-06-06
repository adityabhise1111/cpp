#include <iostream>
#include <map>
using namespace std;
 class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
    
 };
 void insertathead(Node* &head,int d){

        Node* temp=new Node(d);

        temp->next= head;
        head = temp;
    }
    void insertattail(Node* &tail,int d){
        Node* temp=new Node(d);

        tail->next= temp;
        tail = temp;
    }
    bool isCircular(Node* head){
        if (head == NULL){
            return false;
        }

        map<Node* , bool> visited;
        Node* temp = head;

        while(temp != NULL){
            // cycle is present 
            if(visited[temp]== true){
                return true;
            }
            visited[temp]= true;
            temp = temp->next ;

        } 
        return false;
    }
    void printll(Node* &head){
        Node* temp = head;
        while(temp != NULL){
            cout<< temp ->data<<" ";
            temp= temp->next;

        } 

    }

 int main(){
    Node* ll1 = new Node(10);
    Node* head = ll1;
    Node* tail = ll1;
    printll(head);

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

     

 }