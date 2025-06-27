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


Node* sortList(Node *head){
    // Write your code here.

    Node *temp = head ;
    int one = 0;
    int two=0;
    int zero =0;
    while (temp != NULL){
        if(temp->data == 0){
            zero++;
        }
        if(temp->data == 1){
            one++;
        }
        if(temp->data == 2){
            two++;
        }
        temp = temp->next;
        
    }

    //cout<<zero<<" "<<one<<" "<<two<<endl;

    temp = head;
    while(zero != 0){
        
            temp->data = 0;
            zero--;
            temp = temp->next;
            //cout<<zero<<" "<<one<<" "<<two<<endl;
        
    }
    while(one != 0){
        
            temp->data = 1;
            one--;
            temp = temp->next;
            //cout<<zero<<" "<<one<<" "<<two<<endl;
        
    }
    while(two != 0){
        
            temp->data = 2;
            two--;
            temp = temp->next;
            //cout<<zero<<" "<<one<<" "<<two<<endl;
        
    }

    return head;
}

int main(){
    //o/p
}