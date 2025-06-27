#include <iostream>
using namespace std;


  struct ListNode {
      int val;
      ListNode *next;
    ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    void insertAtTail(ListNode*& tail, ListNode* temp) {
        tail->next = temp;
        tail = temp;
    }

    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* list4 = new ListNode(); 
        ListNode* list3 = list4;

        if(list1 == NULL ){ return list2;}
        if(list2 == NULL ){ return list1;}

        while( ( list1 != NULL )&& ( list2 != NULL ) ){
            cout<<"entered w1"<<endl;
            if( (list1->val) < (list2->val) ){
                insertAtTail(list3 , list1);
                cout<<"l1 inserted"<<endl;
                if(list1 != NULL){
                    cout<<"l1 forwarded"<<endl;
                    list1 = list1->next;
                }
            }else{
                insertAtTail(list3 , list2);
                cout<<"l2 inserted"<<endl;
                if(list2 != NULL){
                    cout<<"l2 forwarded"<<endl;
                    list2 = list2->next;
                }
            }
            
        }

        cout<<list1<<" "<<list2<<endl;
        while( list1 != NULL ){
            cout<<"entered w2"<<endl;
                insertAtTail(list3 , list1);
                if(list1 != NULL){
                    cout<<"l1 forwarded"<<endl;
                    list1 = list1->next;
                }   
        }
        while( list2 != NULL ){
            cout<<"entered w3"<<endl;
                insertAtTail(list3 , list2);
                cout<<"l2 inserted"<<endl;
                if(list2 != NULL){
                    cout<<"l2 forwarded"<<endl;
                    list2 = list2->next;
                }   
        }



        return list4->next;
    }
};